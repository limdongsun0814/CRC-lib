#ifndef CRC16_ARC_H
#define CRC16_ARC_H

#include <stdint.h>
#include <stddef.h>

class CRC16Arc {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif