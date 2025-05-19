#ifndef CRC16_IBM_SDLC_H
#define CRC16_IBM_SDLC_H

#include <stdint.h>
#include <stddef.h>

class CRC16Ibm_sdlc {
public:
    static uint16_t calculate(const uint8_t *data,uint8_t length);
};

#endif