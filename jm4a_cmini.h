#ifndef jm4a_cmini_h 
#define jm4a_cmini_h 
#include "Arduino.h" 
#include "jm4a_02.h" 
class jm4a_cmini { private: void F27(); void F23(); void F32(); void F28(uint8_t f); void F29(uint8_t f); void F30(uint8_t f); void F31(uint8_t f); void F34(char* f, uint8_t ff); void F35(char* f, uint8_t ff); void F37(char* f, uint8_t ff); void F39(uint32_t f); void F38(uint8_t f,uint8_t ff); void F24(char* f, uint8_t ff); void F36(uint8_t f,float ff); void F26(); void F25(int* f, uint8_t ff); void F85(uint8_t p); void F33(F47 f); public: jm4a_cmini(); void begin(unsigned long f); void dataTransfer(); void setAnalogInput(uint8_t f, uint8_t ff); void setAnalogOutput(uint8_t f); void noInputs(bool r); void noOutputs(bool w); void setID(char f); void setConfirmation(bool f); void enableMFDPO(uint8_t f,uint32_t ff); void enableOMDPO(uint8_t f, uint8_t ff); }; 
#endif