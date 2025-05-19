#ifndef CRC16_NRSC_5_H
#define CRC16_NRSC_5_H

#include <stdint.h>
#include <stddef.h>

class CRC16Nrsc_5 {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif