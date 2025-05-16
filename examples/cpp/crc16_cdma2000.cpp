#include <iostream>
#include "../../src/CRC16_cdma2000.h"

int main() {
    uint8_t data[] = {0x01, 0x03, 0x00, 0x00, 0x00, 0x02}; 
    uint8_t length = sizeof(data);

    // CRC-16/cdma2000
    uint16_t crc = CRC16Cdma2000::calculate(data,length); 
    std::cout << "CRC-16/cdma2000: 0x" << std::hex << crc  << std::endl;

    std::cin.get(); 
    return 0;
}