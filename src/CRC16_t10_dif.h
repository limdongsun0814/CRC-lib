#ifndef CRC16_T10_DIF_H
#define CRC16_T10_DIF_H

#include <stdint.h>
#include <stddef.h>

class CRC16T10_Dif {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif