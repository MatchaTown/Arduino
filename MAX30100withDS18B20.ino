#include <Wire.h>
#include "MAX30100_PulseOximeter.h"
#include <OneWire.h>
#include <DallasTemperature.h>

#define REPORTING_PERIOD_MS     1000
#define ONE_WIRE_BUS 4

// Inisialisasi objek sensor
PulseOximeter pox;
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensor(&oneWire);

// Variabel untuk suhu
float suhuDS18B20;
uint32_t tsLastReport = 0;
uint32_t tsLastTempReport = 0;

// Callback routine untuk deteksi detak jantung
void onBeatDetected() {
    Serial.println("Beat!");
}

void setup() {
    Serial.begin(9600);
    
    // Inisialisasi MAX30100
    Serial.print("Initializing pulse oximeter..");
    if (!pox.begin()) {
        Serial.println("FAILED");
        for (;;);
    } else {
        Serial.println("SUCCESS");
    }
    pox.setIRLedCurrent(MAX30100_LED_CURR_14_2MA);
    pox.setOnBeatDetectedCallback(onBeatDetected);

    // Inisialisasi sensor suhu
    sensor.begin();
}

void loop() {
    // Update pulse oximeter
    pox.update();

    // Pembacaan dari MAX30100
    if (millis() - tsLastReport > REPORTING_PERIOD_MS) {
        Serial.print("Heart rate: ");
        Serial.print(pox.getHeartRate());
        Serial.print(" bpm / SpO2: ");
        Serial.print(pox.getSpO2());
        Serial.println("%");

        tsLastReport = millis();
    }

    // Pembacaan suhu dari DS18B20
    if (millis() - tsLastTempReport > 1000) { // Ubah interval sesuai kebutuhan
        sensor.setResolution(10);
        sensor.requestTemperatures();
        suhuDS18B20 = sensor.getTempCByIndex(0);
        Serial.print("Suhu: ");
        Serial.println(suhuDS18B20, 2);

        tsLastTempReport = millis();
    }
}
