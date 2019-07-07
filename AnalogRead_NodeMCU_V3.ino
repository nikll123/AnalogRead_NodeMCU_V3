#include <ESP8266WiFi.h>
#include <C:\Projects\Esp8266\password.h> // const char* password = "PSWD";

const char* ssid = "Keenetic-4312";
const char* host = "www.example.com";
//const char* host = "192.168.1.1";

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.println("WIfi connected");
  Serial.print("IP address : ");
  Serial.println(WiFi.localIP());
}

int value = 0;

void loop() {
  value = analogRead(A0);
  Serial.println(value);
  delay(1000);
}
