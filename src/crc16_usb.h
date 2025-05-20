#ifndef CRC16_USB_H
#define CRC16_USB_H

#include <stdint.h>
#include <stddef.h>

uint16_t calculate(const uint8_t *data,uint8_t length);

#endif