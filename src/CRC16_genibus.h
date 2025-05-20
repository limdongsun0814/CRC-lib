#ifndef CRC16_GENIBUS_H
#define CRC16_GENIBUS_H

#include <stdint.h>
#include <stddef.h>

uint16_t calculate(const uint8_t *data,uint8_t length);

#endif