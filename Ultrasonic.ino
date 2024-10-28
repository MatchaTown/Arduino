#define trigPin 6
#define echoPin 7
#define LedMerah 8
#define LedHijau 9

#include <LiquidCrystal_I2C.h>
const int col = 16;
const int row = 2;
LiquidCrystal_I2C lcd(0x27, col, row);

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LedMerah, OUTPUT);
  pinMode(LedHijau, OUTPUT);

  lcd.init();
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  if (distance <= 10)//JIKA JARAK KURANG DARI 10 CM
  {
    digitalWrite(LedHijau, LOW);
    digitalWrite(LedMerah, HIGH);
    lcd.clear();
    lcd.setCursor(2, 0);
    lcd.print("Jarak Bahaya");
    lcd.setCursor(2, 1);
    lcd.print("Harap Mundur");
    
  }
  if (distance >= 11) 
  {
    digitalWrite(LedHijau, HIGH);
    digitalWrite(LedMerah, LOW);
    lcd.clear();
    lcd.setCursor(2, 0);
    lcd.print("Jarak Aman");
  }
  delay(500);
}
