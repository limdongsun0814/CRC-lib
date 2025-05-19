#ifndef CRC16_ISO_IEC_14443_3_A_H
#define CRC16_ISO_IEC_14443_3_A_H

#include <stdint.h>
#include <stddef.h>

class CRC16Iso_Iec_14443_3_A {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif