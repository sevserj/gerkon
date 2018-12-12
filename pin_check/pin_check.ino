#include <PubSubClient.h>
#include <ESP8266WiFi.h>
int         Pin = 5; //№ пина на котором висит геркон
const char* ssid = "DIR-615-d018";
const char* password = "9787490209";
void setup()
{
Serial.begin(115200);
pinMode (Pin, OUTPUT);
 WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
}
void loop() {
  
  while (WiFi.status() != WL_CONNECTED) {
    WiFi.begin(ssid, password);
    delay(500);
    Serial.print("Connecting...");
  {
  Serial.println("");
  Serial.println("WiFi connected");
  }}}

/*
//Монитор пина
while (digitalRead(Pin) == 0) 
{
delay(1000);
Serial.println("Дверь открыта");
}
}*/
