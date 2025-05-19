#include "CRC16_opensafety_b.h"

uint16_t CRC16Opensafety_b::calculate(const uint8_t *data, uint8_t length){
    uint16_t crc = 0x0000;
    uint16_t ploy = 0x755B;

    for(uint8_t i = 0; i <length; i++){
        crc ^=(uint16_t) data[i] << 8;;
        for(uint8_t j=0; j<8; j++){
            if(crc & 0x8000){
                crc<<=1;
                crc^=ploy;
            }else{
                crc<<=1;
            }
        }
    }
    return crc;
}