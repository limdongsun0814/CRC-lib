#include <iostream>
#include "../../src/CRC16_profibus.h"

int main() {
    uint8_t data[] = {0x01, 0x03, 0x00, 0x00, 0x00, 0x02}; 
    uint8_t length = sizeof(data);

    // CRC-16/PROFIBUS
    uint16_t crc = CRC16Profibus::calculate(data,length); 
    std::cout << "CRC-16/PROFIBUS-B: 0x" << std::hex << crc  << std::endl;

    std::cin.get(); 
    return 0;
}