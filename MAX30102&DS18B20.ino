#include "MAX30105.h"
#include "heartRate.h"
#include <OneWire.h>
#include <DallasTemperature.h>
#include <Wire.h>
 
#define REPORTING_PERIOD_MS     1000
#define ONE_WIRE_BUS 4
#define FINGER_ON 7000
#define MINIMUM_SPO2 60.0
 
MAX30105 particleSensor;
 
// Heart rate calculation variables
const byte RATE_SIZE = 4;
byte rates[RATE_SIZE];
byte rateSpot = 0;
long lastBeat = 0;
float beatsPerMinute;
int beatAvg;
 
// Blood oxygen calculation variables
double avered = 0;
double aveir = 0;
double sumirrms = 0;
double sumredrms = 0;
double SpO2 = 0;
double ESpO2 = 60.0;
double FSpO2 = 0.7;
double frate = 0.95;
int i = 0;
int Num = 30;
 
// Temperature sensor setup
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensor(&oneWire);
float suhuDS18B20;
 
// Timing variables
unsigned long lastVitalReport = 0;
unsigned long lastTempRequest = 0;
unsigned long lastTempRead = 0;
bool tempRequestSent = false;
 
void setup() {
  Serial.begin(115200);
  Serial.println("System Start");
 
  if (!particleSensor.begin(Wire, I2C_SPEED_FAST)) {
    Serial.println("MAX30102");
    while (1);
  }
 
  // Configure MAX30102
  byte ledBrightness = 0x7F;
  byte sampleAverage = 4;
  byte ledMode = 2;
  int sampleRate = 800;
  int pulseWidth = 215;
  int adcRange = 16384;
 
  particleSensor.setup(ledBrightness, sampleAverage, ledMode, sampleRate, pulseWidth, adcRange);
  particleSensor.enableDIETEMPRDY();
  particleSensor.setPulseAmplitudeRed(0x0A);
  particleSensor.setPulseAmplitudeGreen(0);
 
  // Initialize temperature sensor
  sensor.begin();
  sensor.setResolution(10);
}
 
void checkVitalSigns() {
  long irValue = particleSensor.getIR();
 
  if (irValue > FINGER_ON) {
    // Check for heartbeat
    if (checkForBeat(irValue)) {
      long delta = millis() - lastBeat;
      lastBeat = millis();
      beatsPerMinute = 60 / (delta / 1000.0);
 
      if (beatsPerMinute < 255 && beatsPerMinute > 20) {
        rates[rateSpot++] = (byte)beatsPerMinute;
        rateSpot %= RATE_SIZE;
        beatAvg = 0;
        for (byte x = 0; x < RATE_SIZE; x++) beatAvg += rates[x];
        beatAvg /= RATE_SIZE;
      }
    }
 
    // Measure blood oxygen
    if (particleSensor.available()) {
      i++;
      uint32_t ir = particleSensor.getFIFOIR();
      uint32_t red = particleSensor.getFIFORed();
 
      double fir = (double)ir;
      double fred = (double)red;
 
      aveir = aveir * frate + fir * (1.0 - frate);
      avered = avered * frate + fred * (1.0 - frate);
      sumirrms += (fir - aveir) * (fir - aveir);
      sumredrms += (fred - avered) * (fred - avered);
 
      if ((i % Num) == 0) {
        double R = (sqrt(sumirrms) / aveir) / (sqrt(sumredrms) / avered);
        SpO2 = 104.0 - 17.0 * R;
        ESpO2 = FSpO2 * ESpO2 + (1.0 - FSpO2) * SpO2;
 
        if (ESpO2 <= MINIMUM_SPO2) ESpO2 = MINIMUM_SPO2;
        if (ESpO2 > 100) ESpO2 = 99.9;
 
        sumredrms = 0.0;
        sumirrms = 0.0;
        SpO2 = 0;
        i = 0;
      }
      particleSensor.nextSample();
    }
 
    // Report vital signs
    if (millis() - lastVitalReport >= REPORTING_PERIOD_MS) {
      Serial.print("Bpm: " + String(beatAvg));
      if (beatAvg > 30) {
        Serial.println(", SPO2: " + String(ESpO2));
      } else {
        Serial.println(", SPO2: ----");
      }
      lastVitalReport = millis();
    }
  } else {
    // Reset all values when no finger detected
    if (millis() - lastVitalReport >= REPORTING_PERIOD_MS) {
      resetVitalSigns();
      Serial.println("Finger Please");
      lastVitalReport = millis();
    }
  }
}
 
void resetVitalSigns() {
  for (byte rx = 0; rx < RATE_SIZE; rx++) rates[rx] = 0;
  beatAvg = 0;
  rateSpot = 0;
  lastBeat = 0;
  avered = 0;
  aveir = 0;
  sumirrms = 0;
  sumredrms = 0;
  SpO2 = 0;
  ESpO2 = 90.0;
}
 
void handleTemperature() {
  unsigned long currentMillis = millis();
 
  // Request temperature reading every second
  if (!tempRequestSent && (currentMillis - lastTempRequest >= 1000)) {
    sensor.requestTemperatures();
    tempRequestSent = true;
    lastTempRequest = currentMillis;
    lastTempRead = currentMillis;
  }
 
  // Read temperature after giving sensor time to convert
  if (tempRequestSent && (currentMillis - lastTempRead >= 750)) {  // 750ms conversion time
    suhuDS18B20 = sensor.getTempCByIndex(0);
    Serial.print("Suhu: ");
    Serial.println(suhuDS18B20, 2);
    tempRequestSent = false;
  }
}
 
void loop() {
  checkVitalSigns();
  handleTemperature();
}