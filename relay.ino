#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "02";        // Ganti dengan SSID Wi-Fi Anda
const char* password = "echidnaandihce"; // Ganti dengan password Wi-Fi Anda

WebServer server(80);  // Membuat objek server pada port 80

// Pin relay
const int relay1 = 25;  // Ganti dengan pin yang Anda gunakan untuk Relay 1
const int relay2 = 26;  // Ganti dengan pin yang Anda gunakan untuk Relay 2

void setup() {
  Serial.begin(115200);
  delay(1000);
  
  // Inisialisasi pin relay sebagai output
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  
  // Matikan relay saat boot
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  
  // Koneksi ke Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Menghubungkan ke WiFi...");
  }
  
  Serial.println("Koneksi WiFi berhasil!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  // Menetapkan rute HTTP
  server.on("/", handleRoot);
  server.on("/relay1/on", []() {
    digitalWrite(relay1, HIGH);
    server.send(200, "text/plain", "Relay 1 ON");
  });
  server.on("/relay1/off", []() {
    digitalWrite(relay1, LOW);
    server.send(200, "text/plain", "Relay 1 OFF");
  });
  server.on("/relay2/on", []() {
    digitalWrite(relay2, HIGH);
    server.send(200, "text/plain", "Relay 2 ON");
  });
  server.on("/relay2/off", []() {
    digitalWrite(relay2, LOW);
    server.send(200, "text/plain", "Relay 2 OFF");
  });

  // Mulai server
  server.begin();
}

void loop() {
  server.handleClient();  // Menangani permintaan klien
}

void handleRoot() {
  String html = "<html><body><h1>Kontrol Relay</h1>";
  html += "<h2>Relay 1</h2>";
  html += "<button onclick=\"location.href='/relay1/on'\">ON</button>";
  html += "<button onclick=\"location.href='/relay1/off'\">OFF</button>";
  html += "<h2>Relay 2</h2>";
  html += "<button onclick=\"location.href='/relay2/on'\">ON</button>";
  html += "<button onclick=\"location.href='/relay2/off'\">OFF</button>";
  html += "</body></html>";
  
  server.send(200, "text/html", html);
}
