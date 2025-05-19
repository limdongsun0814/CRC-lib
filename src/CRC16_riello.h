#ifndef CRC16_RIELLO_H
#define CRC16_RIELLO_H

#include <stdint.h>
#include <stddef.h>

class CRC16Riello {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif