#ifndef CRC16_EN_13757_H
#define CRC16_EN_13757_H

#include <stdint.h>
#include <stddef.h>

class CRC16En13757 {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif