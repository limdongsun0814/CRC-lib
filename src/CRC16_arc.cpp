#include "crc16_arc.h"



uint16_t calculate(const uint8_t *data, uint8_t length){
    uint16_t crc = 0x0000;
    uint16_t ploy = 0xA001;

    for(uint8_t i = 0; i <length; i++){
        crc ^= data[i];
        for(uint8_t j=0; j<8; j++){
            if(crc & 0x1){
                crc>>=1;
                crc^=ploy;
            }else{
                crc>>=1;
            }
        }
    }
    return crc;
}