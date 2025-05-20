#include "Crc16Lsb.h"

//lsb
Crc16Lsb::Crc16Lsb(uint16_t poly, uint16_t init, bool refIn, bool refOut, uint16_t xorOut)
    :poly_reverse_(reverse(poly)),init_reverse_(reverse(init)),xorOut_(xorOut),refOut_(refOut),refIn_(refIn){}

uint16_t Crc16Lsb::calculate(const uint8_t *input, uint8_t length){
    uint16_t crc = init_reverse_;

    for(uint8_t i = 0; i <length; i++){
        uint8_t data=input[i];
        if(!refIn_){
            data = reverse(input[i]);
        }

        crc ^=  data;
        for(uint8_t j=0; j<8; j++){
            if(crc & 0x1){                
                crc >>= 1;
                crc ^= poly_reverse_;
            }else{
                crc >>= 1;
            }
        }
    }

    if(!refOut_){
        crc = reverse(crc);
    }

    return crc^xorOut_;
}

uint16_t Crc16Lsb::reverse(uint16_t data){
    uint16_t result=0;
    for(uint8_t j=0; j<16; j++){
        if((data>>j)&0x01){
            result |= (uint16_t)(0x01 << (15-j));
        }
    }
    return result;
}

uint8_t Crc16Lsb::reverse(const uint8_t data){
    uint8_t length = sizeof(data);
    uint8_t result=0;
    for(int i=0; i<8; i++){
        if((data>>i)&0x01){
            result |= (uint8_t) 0x01 << (7-i);
        }
    }
    return result;
}

uint8_t* Crc16Lsb::copy(const uint8_t *data){
    uint8_t length = sizeof(data);
    uint8_t* result;
    for(uint8_t i=0; i<length; i++){
        result[i] |= data[i];
    }
    return result;
}