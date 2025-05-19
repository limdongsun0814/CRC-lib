#ifndef CRC16_DNP_H
#define CRC16_DNP_H

#include <stdint.h>
#include <stddef.h>

class CRC16Dnp {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif