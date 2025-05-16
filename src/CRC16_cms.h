#ifndef CRC16_CMS_H
#define CRC16_CMS_H

#include <stdint.h>
#include <stddef.h>

class CRC16Cms {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif