#include <Servo.h>

Servo myServo;  // Buat objek Servo
int ldrPin = A0;  // Pin LDR terhubung ke A0
int ldrValue;     // Variabel untuk menyimpan pembacaan LDR
int threshold = 830;  // Nilai ambang batas untuk menggerakkan servo (atur sesuai cahaya)

void setup() {
  Serial.begin(9600);
  myServo.attach(9);  // Hubungkan servo ke pin 9
  myServo.write(0);   // Posisikan servo ke 0 derajat awal
}

void loop() {
  ldrValue = analogRead(ldrPin);  // Membaca nilai LDR
  Serial.print("Nilai LDR: ");
  Serial.println(ldrValue);       // Menampilkan nilai LDR di Serial Monitor

  // Jika nilai LDR di bawah threshold (lebih gelap), servo bergerak
  if (ldrValue < threshold) {
    myServo.write(35);  // Servo bergerak ke posisi 45 derajat
    delay(100);        // Tahan selama 1 detik
    myServo.write(0);   // Kembalikan servo ke posisi semula
    delay(100);        // Tunggu sebelum mengecek ulang
  }
}
