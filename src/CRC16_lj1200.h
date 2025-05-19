#ifndef CRC16_LJ1200_H
#define CRC16_LJ1200_H

#include <stdint.h>
#include <stddef.h>

class CRC16Lj1200 {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif