#include <M5StickC.h>
#include <MQTT.h>
#include <MQTTClient.h>
#include <WiFi.h>

/* WiFiの設定 */
const char ssid[] = "******";
const char pass[] = "******";
const char mqttBroker[] = "zzzzzzzzzz";
const char mqttName[] ="M5StickC";
const char mqttID[] = " xxxxxxx";
const char mqttPasswd[] = "yyyyyyyyyy ";
const char topic[] = "/image";
String payload;

WiFiClient net;
MQTTClient client;

void connect() {
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(1000);
  }
  Serial.print("\nconnecting...");
  while (!client.connect(mqttName , mqttID, mqttPasswd)) {
    delay(1000);
  }
  Serial.println("connected");
  client.subscribe("/image");
  client.publish("/image");
}

void messageReceived(String &topic, String &payload) {
  Serial.print("topic: " + topic);
  Serial.println("payload: " + payload);
}


void setup() {
  M5.begin();
  Serial.begin(115200, SERIAL_8N1, 32, 33);// Grove
  WiFi.begin(ssid, pass);
  client.begin(mqttBroker, net);
//  client.onMessage(messageReceived);
  connect();
}

void loop() {
  M5.update(); 
  if(!client.connected()) {
    connect();
  }else
  if (Serial.available()) {
    String str = Serial.readStringUntil('\n');
    int data = str.toInt();
    M5.Lcd.printf("Data %d\n%s\n", data, str);
    payload = str;
    client.publish(topic, payload);
    delay(1000);
    }
    }  
