#include <LiquidCrystal_I2C.h> // Memanggil library LCD
#include <OneWire.h> //Memanggil library OneWire yang diperlukan sebagai dependensi library Dallas Temperature
#include <DallasTemperature.h> // Memanggil library Dallas Temperature
#define ONE_WIRE_BUS 4  // Menempatkan PIN hasil pembacaan sensor DS18B20 pada PIN 2. 
   //Disebut One Wire karena kita bisa menempatkan sensor DS18B20 lain pada PIN yang sama  
LiquidCrystal_I2C lcd(0x27, 16, 2); // Mengatur alamat LCD dan dimensi LCD, yaitu 20 kolom dan 4 baris

OneWire oneWire(ONE_WIRE_BUS); //Membuat variabel oneWire berdasarkan PIN yang telah didefinisikan
DallasTemperature sensor(&oneWire); //Membuat variabel untuk menyimpan hasil pengukuran
float suhuDS18B20; //deklarasi variable suhu DS18B20 dengan jenis data float

void setup(void)
{
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Matcha Town");
  lcd.setCursor(0, 1);
  lcd.print("Present");
  Serial.begin(9600); //Menginisiasikan setup kecepatan komunikasi
  sensor.begin();      //Menginisiasikan sensor One-Wire DS18B20
  delay(2000);
}

void loop(void)
{
  //sensor.setResolution(9);  // Sebelum melakukan pengukuran, atur resolusinya
  sensor.setResolution(10);
  //sensor.setResolution(11);
  //sensor.setResolution(12);
  sensor.requestTemperatures();  // Perintah konversi suhu
  suhuDS18B20 = sensor.getTempCByIndex(0);  //Membaca data suhu dari sensor #0 dan mengkonversikannya ke nilai Celsius
  // suhuDS18B20 = (suhuDS18B20*9/5) + 32;
  // suhuDS18B20 = suhuDS18B20 = 273.15;
  //Serial.println(suhuDS18B20, 1);  //Presisi 1 digit
  Serial.println(suhuDS18B20, 2);  //Presisi 2 digit
  //Serial.println(suhuDS18B20, 3);  //Presisi 3 digit
  //Serial.println(suhuDS18B20, 4);  //Presisi 4 digit
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.setCursor(6, 0);
  lcd.print(suhuDS18B20, 2);
  lcd.print((char)223);
  lcd.print("C"); 
  delay(1000);    //delay 1 detik (1000 miliseconds)
}