#include <Arduino.h>
#include <PicoSoftwareSerial.hpp>
#include "hardware/pio.h"

#define TX_PIN WB_IO3
#define RX_PIN WB_IO4

#define TX2_PIN WB_IO5
#define RX2_PIN WB_IO6

SoftwareSerial SoftSerial1 = SoftwareSerial(TX_PIN, RX_PIN);
SoftwareSerial SoftSerial2 = SoftwareSerial(TX2_PIN, RX2_PIN, 2, 3);
void setup()
{
  SoftSerial1.begin(115200);
  SoftSerial2.begin(115200);
}

void loop()
{
  SoftSerial1.print("1234");
  SoftSerial2.print("5678");
}
