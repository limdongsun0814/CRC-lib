#ifndef CRC16MSB_H
#define CRC16MSB_H

#include <stdint.h>
#include <stddef.h>

class Crc16Msb {
    public:
        Crc16Msb(uint16_t poly,uint16_t init,bool RefIn,bool RefOut,uint16_t XorOut);
        uint16_t calculate(const uint8_t *data,uint8_t length);
    private:
        uint8_t reverse(const uint8_t data);
        uint16_t reverse(const uint16_t data);
        uint8_t* copy(const uint8_t *data);
        bool refIn_;
        bool refOut_;
        uint16_t xorOut_;
        uint16_t poly_;
        uint16_t init_;
};

#endif