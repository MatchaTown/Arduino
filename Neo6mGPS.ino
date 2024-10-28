#include <TinyGPSPlus.h>
#include <HardwareSerial.h>

// Inisialisasi serial untuk GPS
HardwareSerial gpsSerial(2); // UART1 (Serial1 pada ESP32)

TinyGPSPlus gps;

void setup()
{
  Serial.begin(115200);    // Serial monitor
  gpsSerial.begin(9600, SERIAL_8N1, 16, 17); // Serial GPS: RX pin 16, TX pin 17

  Serial.println(F("GPS Example for ESP32 + Neo 6M"));
  Serial.println(F("Testing TinyGPSPlus library v. ")); 
  Serial.println(TinyGPSPlus::libraryVersion());
  Serial.println(F("Waiting for GPS data..."));
}

void loop()
{
  // Baca data dari GPS
  while (gpsSerial.available() > 0)
  {
    if (gps.encode(gpsSerial.read()))
    {
      displayInfo();
    }
  }

  // Cek apakah GPS sedang idle, dan cetak status setiap 5 detik
  if (millis() > 5000 && gps.charsProcessed() < 10)
  {
    Serial.println(F("No GPS data received: check wiring."));
    delay(5000); // Tunda selama 5 detik
  }
}

void displayInfo()
{
  Serial.print(F("Location: ")); 
  if (gps.location.isValid())
  {
    Serial.print(gps.location.lat(), 6);
    Serial.print(F(","));
    Serial.print(gps.location.lng(), 6);
  }
  else
  {
    Serial.print(F("INVALID"));
  }

  Serial.print(F("  Date/Time: "));
  if (gps.date.isValid())
  {
    Serial.print(gps.date.month());
    Serial.print(F("/"));
    Serial.print(gps.date.day());
    Serial.print(F("/"));
    Serial.print(gps.date.year());
  }
  else
  {
    Serial.print(F("INVALID"));
  }

  Serial.print(F(" "));
  if (gps.time.isValid())
  {
    if (gps.time.hour() < 10) Serial.print(F("0"));
    Serial.print(gps.time.hour());
    Serial.print(F(":"));
    if (gps.time.minute() < 10) Serial.print(F("0"));
    Serial.print(gps.time.minute());
    Serial.print(F(":"));
    if (gps.time.second() < 10) Serial.print(F("0"));
    Serial.print(gps.time.second());
    Serial.print(F("."));
    if (gps.time.centisecond() < 10) Serial.print(F("0"));
    Serial.print(gps.time.centisecond());
  }
  else
  {
    Serial.print(F("INVALID"));
  }

  Serial.println();
}
