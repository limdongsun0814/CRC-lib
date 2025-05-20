#ifndef Crc16LSB_H
#define Crc16LSB_H

#include <stdint.h>
#include <stddef.h>

class Crc16Lsb {
    public:
        Crc16Lsb(uint16_t poly,uint16_t init,bool RefIn,bool RefOut,uint16_t XorOut);
        uint16_t calculate(const uint8_t *data,uint8_t length);
    private:
        uint8_t reverse(const uint8_t data);
        uint16_t reverse(const uint16_t data);
        uint8_t* copy(const uint8_t *data);
        bool refIn_;
        bool refOut_;
        uint16_t xorOut_;
        uint16_t poly_reverse_;
        uint16_t init_reverse_;
};

#endif