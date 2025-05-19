#ifndef CRC16_MAXIM_DOW_H
#define CRC16_MAXIM_DOW_H

#include <stdint.h>
#include <stddef.h>

class CRC16Maxim_Dow {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif