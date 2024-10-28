#include "HX711.h"
#include<LiquidCrystal_I2C.h>

// Pin definitons
const int LOADCELL_DOUT_PIN = A1;
const int LOADCELL_SCK_PIN = A2;

const int enA = 5;
const int in1 = 6;
const int in2 = 7;

const int PB =  2; //pushbutton

const int Trig = 9;
const int Echo = 10;

LiquidCrystal_I2C lcd(0x27,16,2);
// Create an instance of the HX711 class
HX711 scale;

void setup() {
  Serial.begin(9600);
  // Setup pin motor L298N
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  pinMode(PB, INPUT);

  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);

  lcd.init();
  lcd.backlight();
  lcd.clear();
  
  // Initialize the scale
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  
  // Calibrate the scale (adjust the factor based on your load cell)
  scale.set_scale(250.f); // This value is obtained using the calibration process
  scale.tare();  // Reset the scale to 0


}

void loop() {
  // Read the weight
  float weight = scale.get_units(15);  // Get an average of 10 readings
  // Convert to grams (if the calibration factor was set for kg)
  float weightInGrams = weight * 1000;
  if (weight<0) {
    weight = 0;
  }
  // Print the weight on the serial monitor
  Serial.print("Weight: ");
  Serial.print(weight);
  Serial.println(" gram");
  lcd.setCursor(0, 0);
  lcd.print("berat:");
  lcd.setCursor(7, 0);
  lcd.print(weight);
  delay(100);
  //ULTRASONIK
  long duration, distance;
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  duration = pulseIn(Echo, HIGH);
  distance = (duration/2) / 29.1;

  
  if (distance <= 10) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 255);
    delay(2000);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enA, 0);
  }
    if (weight >= 200) {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      analogWrite(enA, 255);
      delay(2000);
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      analogWrite(enA, 0);
    }

  delay(500);
}
