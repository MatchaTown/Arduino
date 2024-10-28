#include <Wire.h>
#include <Adafruit_VL53L0X.h>
#include <LiquidCrystal_I2C.h>

// Inisialisasi sensor VL53L0X
Adafruit_VL53L0X lox = Adafruit_VL53L0X();

// Inisialisasi LCD I2C
LiquidCrystal_I2C lcd(0x27, 16, 2);

int count = 0;
int validReadCount = 0;
float lastValidHeight = 0;
float tinggibadan = 0;

void setup() {
  // Inisialisasi LCD
  lcd.init();
  lcd.backlight();

  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("POSYANDU");
  lcd.setCursor(1, 1);
  lcd.print("KLEGENWONOSARI");
  delay(2000);

  lcd.clear();
  lcd.setCursor(7, 0);
  lcd.print("KKN");
  lcd.setCursor(5, 1);
  lcd.print("UNWIKU");
  delay(2000);
  
  //Serial.begin(9600);
  //Serial.println("Starting VL53L0X test");

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Mengukur tinggi");

  // Inisialisasi sensor VL53L0X
  if (!lox.begin()) {
    //Serial.println(F("Failed to boot VL53L0X"));
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Sensor gagal");
    while (1);
  }
  //Serial.println(F("VL53L0X Ready"));
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("Siap  Mengukur");
}

void loop() {
  VL53L0X_RangingMeasurementData_t measure;

  lox.rangingTest(&measure, true); // pass in 'true' to get debug data printout!

  if (measure.RangeStatus != 4) {  // jika pengukuran berhasil
    int height = measure.RangeMilliMeter;  // mengukur tinggi dalam milimeter
    float heightCm = height / 10.0;  // konversi ke centimeter
    
    tinggibadan = 195- heightCm;
    // Tampilkan hasil di Serial Monitor
    Serial.print("Height: "); Serial.print(heightCm); Serial.println(" cm");

    // Tampilkan hasil di LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Tinggi = ");
    lcd.setCursor(9, 0);
    lcd.print(tinggibadan);
    lcd.setCursor(14, 0);
    lcd.print("cm");
    delay(100);
  }

  if (tinggibadan > 70.0) {
    count++;
  } else {
    count = 0;
  }

  if (count >= 10) {
    holdDisplay(tinggibadan);
    count = 0;
  } 
  //delay
}

void holdDisplay(float tinggibadan) {
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("Tinggi Badan");
  lcd.setCursor(3, 1);
  lcd.print(tinggibadan);
  lcd.print(" cm");
  
  delay(3000);  // Menahan tampilan selama 3 detik
  lcd.clear();
}
