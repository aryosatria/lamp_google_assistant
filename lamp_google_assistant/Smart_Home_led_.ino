/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial // digunakan untuk monitor blynk di serial

#include <ESP8266WiFi.h> // file untuk modul wifi
#include <BlynkSimpleEsp8266.h> // file untuk blynk

char auth[] = "yxHmB-1iegScYV_WqKXTLrbhddh9xPDx"; // token yang dikirim dari blynk ke email masing - masing
char ssid[] = "Petra";
char pass[] = "satria2004";

void setup() // fungsi utama, dijalankan sekali 
{
  // Debug console
  Serial.begin(9600); // untuk monitor di serial

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  // menjalankan blynk sesuai token, wifi, dan passwordnyak
}

void loop() // ifungsi utama dijalankan berulang kali
{
  Blynk.run();\ // perintah untuk menjalankan blynk 
}
