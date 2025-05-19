#ifndef CRC16_UMTS_H
#define CRC16_UMTS_H

#include <stdint.h>
#include <stddef.h>

class CRC16Umts {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif