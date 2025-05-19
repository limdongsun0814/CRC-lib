#ifndef CRC16_PROFIBUS_H
#define CRC16_PROFIBUS_H

#include <stdint.h>
#include <stddef.h>

class CRC16Profibus {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif