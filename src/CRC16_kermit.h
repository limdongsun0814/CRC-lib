#ifndef CRC16_KERMIT_H
#define CRC16_KERMIT_H

#include <stdint.h>
#include <stddef.h>

class CRC16Kermit {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif