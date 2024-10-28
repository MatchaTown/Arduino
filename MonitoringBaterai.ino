float Volt1;
float Volt;
float capacity;

// Batas tegangan
const float V_min = 6.4;  // Tegangan minimum (baterai hampir habis)
const float V_max = 8.4;  // Tegangan maksimum (baterai penuh)

void setup() {
  Serial.begin(115200); // Kecepatan baud untuk ESP32 biasanya 115200
  Serial.println("Voltage: ");
}

void loop() {
  Volt1 = analogRead(35); // Baca nilai dari pin analog 34
  Volt = (Volt1 * 0.00088) * 5; //cari rumus sendiri pakk

  // Hitung kapasitas dalam persentase
  if (Volt >= V_max) {
    capacity = 100.0;  // Kapasitas penuh
  } else if (Volt <= V_min) {
    capacity = 0.0;    // Kapasitas kosong
  } else {
    // Persentase kapasitas dari rentang
    capacity = ((Volt - V_min) / (V_max - V_min)) * 100.0;
  }

  // Tampilkan hasil
  Serial.print("Tegangan: ");
  Serial.print(Volt);
  Serial.print(" V, Kapasitas: ");
  Serial.print(capacity);
  Serial.println(" %");

  delay(1000); // Tunggu 1 detik sebelum membaca lagi
}
