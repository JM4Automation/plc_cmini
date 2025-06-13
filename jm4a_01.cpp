#include "jm4a_01.h" 
F40::F40() { } 
void F40::F41(uint8_t f, uint8_t ff) { ::pinMode(f, ff); } int F40::F42(uint8_t f) { return ::digitalRead(f); } void F40::F43(uint8_t f, uint8_t ff) { ::digitalWrite(f, ff); } int F40::F44(uint8_t f) { return ::analogRead(f); } void F40::F45(uint8_t f, int ff) { ::analogWrite(f, ff); } 
F40 F46; 