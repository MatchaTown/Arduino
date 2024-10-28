#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "BongoCatBitMap.h"

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define leftBtn  7
#define rightBtn 8

// button State:
int leftBtnState = 0;
int rightBtnState = 0;
 
// ------------------- For i2c -------------------
//// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
 
void setup() {
  Serial.begin(115200);
 
  delay(2000);
  Serial.println(F("Starting!"));

  // initialize the left button pin as an output:
  pinMode(leftBtn, INPUT_PULLUP);
  // initialize the right button pin as an input:
  pinMode(rightBtn, INPUT_PULLUP);

//  ------------------- For i2c -------------------
//  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  Serial.println(F("Initialized!"));
 
  // Show initial display buffer contents on the screen --
  display.clearDisplay();
  display.drawBitmap(0, 0, bongoCat_idle, 128, 64, WHITE);
 
  display.display();
}
 
void loop() {

  display.clearDisplay();
  display.drawBitmap(0, 0, bongoCat_idle, 128, 64, WHITE);
  display.display();
  delay(200);
  
  display.drawBitmap(0, 0, bongoCat_leftBtn, 128, 64, WHITE);
  display.display();
  delay(100);

  display.clearDisplay();
  display.drawBitmap(0, 0, bongoCat_idle, 128, 64, WHITE);
  display.display();
  delay(200);

  display.drawBitmap(0, 0, bongoCat_rightBtn, 128, 64, WHITE);
  display.display();
  delay(100);

  display.clearDisplay();
  display.drawBitmap(0, 0, bongoCat_idle, 128, 64, WHITE);
  display.display();
  delay(200);
/*
  display.drawBitmap(0, 0, bongoCat_bothBtn, 128, 64, WHITE);
  display.display();
  delay(200);

  display.drawBitmap(0, 0, bongoCat_idle, 128, 64, WHITE);
  display.display();
  delay(200);
*/
}