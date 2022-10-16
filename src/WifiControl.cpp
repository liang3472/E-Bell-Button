#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>
#include <WifiControl.h>

WifiControl wifiControl;

WifiControl::WifiControl()
{
}
WifiControl::~WifiControl()
{
}

void WifiControl::connect()
{
  WiFiManager wifiManager;

  // exit after config instead of connecting
  wifiManager.setBreakAfterConfig(true);

  // reset settings - for testing
  // wifiManager.resetSettings();
  // ESP.eraseConfig(); 
  // delay(2000);
  // ESP.reset(); 

  if (!wifiManager.autoConnect("E-Bell🔔"))
  {
    Serial.println("failed to connect, we should reset as see if it connects");
    delay(3000);
    ESP.reset();
    delay(5000);
  }

  Serial.println("connected...yeey :)");

  Serial.println("local ip");
  Serial.println(WiFi.localIP());
}