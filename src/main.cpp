#include <Arduino.h>
#include <WifiControl.h>

// 初始化显示屏
void initDisplay()
{
  Serial.println("initDisplay");
}

void initWifi()
{
  Serial.println("initWifi");
  wifiControl.connect();
}

void setup()
{
  // put your setup code here, to run once:1
  Serial.begin(115200);
  initDisplay();
  initWifi();
}

void loop()
{
  // put your main code here, to run repeatedly:
}