#include "jm4a_03.h" 
F52::F52() {} 
void F52::F54(unsigned long f) { Serial.begin(f); } void F52::F61(uint8_t f) { Serial.write(f); } void F52::F60(const char *f) { Serial.print(f); } void F52::F56(const char *f) { Serial.println(f); } void F52::F56(const String &f) { Serial.println(f); } int F52::F58() { return Serial.read(); } size_t F52::F55(char f, char *g, size_t h) { return Serial.readBytesUntil(f, g, h); } int F52::F54() { return Serial.available(); } void F52::F57() { Serial.flush(); } 
F52 F53; 