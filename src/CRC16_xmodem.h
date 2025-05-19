#ifndef CRC16_XMODEM_H
#define CRC16_XMODEM_H

#include <stdint.h>
#include <stddef.h>

class CRC16Xmodem {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif