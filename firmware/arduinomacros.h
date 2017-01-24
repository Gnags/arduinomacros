#ifndef _MACROS_h_
#define _MACROS_h_


#include "application.h"

#define lowByte(w) ((uint8_t) ((w) & 0xff))
#define highByte(w) ((uint8_t) ((w) >> 8))
#define bitRead(value, bit) (((value) >> (bit)) & 0x01)
#define bitSet(value, bit) ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#define bitWrite(value, bit, bitvalue) (bitvalue ? bitSet(value, bit) : bitClear(value, bit))
#define bitToggle(value,bit) ((((value) >> (bit)) & 0x01) ? bitClear(value, bit) : bitSet(value, bit))

#define lowWord(x) (uint16_t) (x >> 16)
#define highWord(x) (uint16_t) (x & 0x0000FFFFuL)
#define buildUint32(lw,hw) (((uint32_t)lw) << 16) | ((uint32_t)hw)
#define countup(x,y)  x++;if(x>y) x=0;

#define prt(x) Serial.print(x)
#define prtln(x) Serial.println(x)
#define prt2(x,y) prt(x);prt(y); prt(" ")
#define prtln2(x,y) prt(x);prtln(y)


#define p(x) Serial.print(x);
#define pl(x) Serial.println(x);

#define kk Serial.println("kk")

#endif
