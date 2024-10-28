#include "MAX30105.h"           //MAX3010x library
#include "heartRate.h"          //Heart rate calculating algorithm
#include <OneWire.h>
#include <DallasTemperature.h>
#include <Wire.h>
#define REPORTING_PERIOD_MS     1000
#define ONE_WIRE_BUS 4
MAX30105 particleSensor;

// Heart rate calculation variables
const byte RATE_SIZE = 4; // Number of averages
byte rates[RATE_SIZE]; // Heartbeat array
byte rateSpot = 0;
long lastBeat = 0; // Time at which the last beat occurred
float beatsPerMinute;
int beatAvg;

// Blood oxygen calculation variables
double avered = 0;
double aveir = 0;
double sumirrms = 0;
double sumredrms = 0;

double SpO2 = 0;
double ESpO2 = 60.0; // Initial value
double FSpO2 = 0.7; // Filter factor for estimated SpO2
double frate = 0.95; // Low pass filter for IR/red LED value to eliminate AC component
int i = 0;
int Num = 30; // Sample 30 times to calculate 1 time
#define FINGER_ON 7000    // Minimum infrared value to determine if a finger is placed
#define MINIMUM_SPO2 60.0 // Minimum blood oxygen level

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensor(&oneWire);
// Variabel untuk suhu
float suhuDS18B20;
uint32_t tsLastReport = 0;
uint32_t tsLastTempReport = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("System Start");

  // Check sensor
  if (!particleSensor.begin(Wire, I2C_SPEED_FAST)) { // Use default I2C port, 400kHz speed
    Serial.println("MAX30102"); // "Cannot find MAX30102"
    while (1);
  }

  // Adjustable options
  byte ledBrightness = 0x7F; // Brightness suggestion = 127
  byte sampleAverage = 4; // Options: 1, 2, 4, 8, 16, 32
  byte ledMode = 2; // Options: 1 = Red only (heart rate), 2 = Red + IR (blood oxygen)
  int sampleRate = 800; // Options: 50, 100, 200, 400, 800, 1000, 1600, 3200
  int pulseWidth = 215; // Options: 69, 118, 215, 411
  int adcRange = 16384; // Options: 2048, 4096, 8192, 16384

  // Set up the desired parameters
  particleSensor.setup(ledBrightness, sampleAverage, ledMode, sampleRate, pulseWidth, adcRange); // Configure sensor with these settings
  particleSensor.enableDIETEMPRDY();

  particleSensor.setPulseAmplitudeRed(0x0A); // Turn Red LED to low to indicate sensor is running
  particleSensor.setPulseAmplitudeGreen(0); // Turn off Green LED

  // Inisialisasi sensor suhu
  sensor.begin();
}

void loop() {
  long irValue = particleSensor.getIR(); // Reading the IR value it will permit us to know if there's a finger on the sensor or not

  if (millis() - tsLastReport > REPORTING_PERIOD_MS) {
  // Check if a finger is placed
  if (irValue > FINGER_ON) {
    // Check for heartbeat
    if (checkForBeat(irValue) == true) {
      long delta = millis() - lastBeat; // Calculate heartbeat difference
      lastBeat = millis();
      beatsPerMinute = 60 / (delta / 1000.0); // Calculate average heartbeat
      if (beatsPerMinute < 255 && beatsPerMinute > 20) {
        rates[rateSpot++] = (byte)beatsPerMinute; // Store heartbeat value in array
        rateSpot %= RATE_SIZE;
        beatAvg = 0; // Calculate average
        for (byte x = 0; x < RATE_SIZE; x++) beatAvg += rates[x];
        beatAvg /= RATE_SIZE;
      }
    }

    // Measure blood oxygen
    uint32_t ir, red;
    double fred, fir;
    particleSensor.check(); // Check the sensor, read up to 3 samples
    if (particleSensor.available()) {
      i++;
      ir = particleSensor.getFIFOIR(); // Read infrared
      red = particleSensor.getFIFORed(); // Read red light
      fir = (double)ir; // Convert to double
      fred = (double)red; // Convert to double
      aveir = aveir * frate + (double)ir * (1.0 - frate); // Average IR level by low pass filter
      avered = avered * frate + (double)red * (1.0 - frate); // Average red level by low pass filter
      sumirrms += (fir - aveir) * (fir - aveir); // Square sum of alternate component of IR level
      sumredrms += (fred - avered) * (fred - avered); // Square sum of alternate component of red level

      if ((i % Num) == 0) {
        double R = (sqrt(sumirrms) / aveir) / (sqrt(sumredrms) / avered); // Corrected line
        SpO2 = 104.0 - 17.0 * R;
        ESpO2 = FSpO2 * ESpO2 + (1.0 - FSpO2) * SpO2; // Low pass filter
        if (ESpO2 <= MINIMUM_SPO2) ESpO2 = MINIMUM_SPO2; // Indicator for finger detached
        if (ESpO2 > 100) ESpO2 = 99.9;
        sumredrms = 0.0; 
        sumirrms = 0.0; 
        SpO2 = 0;
        i = 0;
      }
      particleSensor.nextSample(); // We're finished with this sample so move to next sample
    }

    // Display data to serial
    Serial.print("Bpm: " + String(beatAvg));
    // Display blood oxygen level, avoiding miscalculation; require heartbeat over 30 to display SpO2
    if (beatAvg > 30) {
      Serial.println(", SPO2: " + String(ESpO2));
    } else {
      Serial.println(", SPO2: ----");
    }
  }
  // No finger detected, clear all data and indicate "Finger Please"
  else {
    // Clear heart rate data
    for (byte rx = 0; rx < RATE_SIZE; rx++) rates[rx] = 0;
    beatAvg = 0; 
    rateSpot = 0; 
    lastBeat = 0;
    // Clear blood oxygen data
    avered = 0; 
    aveir = 0; 
    sumirrms = 0; 
    sumredrms = 0;
    SpO2 = 0; 
    ESpO2 = 90.0;

    // Indicate "Finger Please"
    Serial.println("Finger Please");
    
  }
  tsLastReport = millis();

  }
  if (millis() - tsLastTempReport > 1000) {
      sensor.setResolution(10);
      sensor.requestTemperatures();
      suhuDS18B20 = sensor.getTempCByIndex(0);
      Serial.print("Suhu: ");
      Serial.println(suhuDS18B20, 2);

        tsLastTempReport = millis();
  }
}
