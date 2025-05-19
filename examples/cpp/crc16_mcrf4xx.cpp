#include <iostream>
#include "../../src/CRC16_mcrf4xx.h"

int main() {
    uint8_t data[] = {0x01, 0x03, 0x00, 0x00, 0x00, 0x02}; 
    uint8_t length = sizeof(data);

    // CRC-16/MCRF4XX
    uint16_t crc = CRC16Mcrf4xx::calculate(data,length); 
    std::cout << "CRC-16/MCRF4XX: 0x" << std::hex << crc  << std::endl;

    std::cin.get(); 
    return 0;
}