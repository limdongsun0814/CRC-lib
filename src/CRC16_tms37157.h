#ifndef CRC16_TMS37157_H
#define CRC16_TMS37157_H

#include <stdint.h>
#include <stddef.h>

class CRC16Tms37157 {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif