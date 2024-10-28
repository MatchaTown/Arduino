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
  Serial.println(F("Waiting for GPS data..."));
}

void loop()
{
  // Baca data dari GPS
  while (gpsSerial.available() > 0)
  {
    if (gps.encode(gpsSerial.read()))
    {
      displayLocation();
    }
  }

  // Cek apakah GPS sedang idle, dan cetak status setiap 5 detik
  if (millis() > 5000 && gps.charsProcessed() < 10)
  {
    Serial.println(F("No GPS data received: check wiring."));
    delay(5000); // Tunda selama 5 detik
  }
}

void displayLocation()
{
  if (gps.location.isValid())
  {
    // Tampilkan hanya nilai lat dan lng
    Serial.print(gps.location.lat(), 6);
    Serial.print(F(","));
    Serial.println(gps.location.lng(), 6);
  }
  else
  {
    Serial.println(F("INVALID"));
  }
}
