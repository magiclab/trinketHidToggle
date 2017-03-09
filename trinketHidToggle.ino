//
// trinketHidToggle
// magicLab 2017
// http://www.magiclab.nyc
// Created by enrico<naus3a>viola
//

#include <HIDSerial.h>

HIDSerial serial;
bool bState = false;
int pinPower = 1;
unsigned char buffer[2];

void setup() {
  bState = false;
  pinMode(pinPower, OUTPUT);
  digitalWrite(pinPower, LOW);
  serial.begin();
}

void loop() {
  if(serial.available()) {
    int size = serial.read(buffer);
    if (size>0) {
      bState = !bState;
      if(bState){
        digitalWrite(pinPower, HIGH);
        serial.println("1");
      }else{
        digitalWrite(pinPower, LOW);
        serial.println("0");
      }
    }
  }
  serial.poll();
}
