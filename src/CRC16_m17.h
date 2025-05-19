#ifndef CRC16_M17_H
#define CRC16_M17_H

#include <stdint.h>
#include <stddef.h>

class CRC16M17 {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif