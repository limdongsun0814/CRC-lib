#ifndef CRC16_MCRF4XX_H
#define CRC16_MCRF4XX_H

#include <stdint.h>
#include <stddef.h>

uint16_t calculate(const uint8_t *data,uint8_t length);

#endif