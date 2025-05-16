#ifndef CRC16_DECT_X_H
#define CRC16_DECT_X_H

#include <stdint.h>
#include <stddef.h>

class CRC16Dect_x {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif