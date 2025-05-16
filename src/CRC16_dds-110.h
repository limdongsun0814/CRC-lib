#ifndef CRC16_DDS_110_H
#define CRC16_DDS_110_H

#include <stdint.h>
#include <stddef.h>

class CRC16dds_110 {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif