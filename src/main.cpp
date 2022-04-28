#include <Arduino.h>

#include <USBKeyboard.h>

const uint8_t pushbuttons[4] = { p2, p3, p4, p5 };

USBKeyboard kb;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  for (uint8_t i = 0; i < sizeof(pushbuttons); i++) {
    pinMode(pushbuttons[i], INPUT_PULLUP);
  }
}

void loop() {
  for(uint8_t i =0; i<sizeof(pushbuttons); i++){
    if(!digitalRead(pushbuttons[i])){
      switch(i){
        case 0:
          kb.key_code("y", KEY_ALT);
          break;
        case 1: 
          
          break;
        case 2: 
          
          break;
        case 3:
          
      }
    delay(500);
    }
  }
}