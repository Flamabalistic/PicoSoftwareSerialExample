# PicoSoftwareSerialExample
Quick 'n' dirty PIO based implementation of HardwareSerial for an rp2040 based board
- What definetly works:
  - Baud rate of 115200
  - 2 streams running on the one PIO block (taking up all 4 state machines)
 
Not too sure about the reliability of it all, but it should work in a pinch! 
