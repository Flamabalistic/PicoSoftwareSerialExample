#include <Arduino.h>
#include <PicoSoftwareSerial.hpp>

#define TX_PIN WB_IO5
#define RX_PIN WB_IO6

SoftwareSerial TestSerial = SoftwareSerial(TX_PIN, RX_PIN);
void setup()
{
  TestSerial.begin(115200);
}

void loop()
{
  TestSerial.print("test");
  delay(300);
}
