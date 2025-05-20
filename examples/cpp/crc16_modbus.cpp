#include <iostream>

#include "../../src/crc16_modbus.h"


int main() {
    uint8_t data[] = {0x01, 0x03, 0x00, 0x00, 0x00, 0x02}; 
    uint8_t length = sizeof(data);

    // CRC-16/MODBUS
    uint16_t crc = calculate(data,length); 

    std::cout << "CRC-16/Modbus: 0x" << std::hex << crc  << std::endl;


    return 0;
}