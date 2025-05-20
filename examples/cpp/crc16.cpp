#include <iostream>
// #include "../../src/Crc16Msb.h"
#include "../../src/Crc16Msb.h"

int main() {
    uint8_t data[] = {0x01, 0x03, 0x00, 0x00, 0x00, 0x02}; 
    uint8_t length = sizeof(data);

    // CRC-16/ARC
    Crc16Msb crc16 = Crc16Msb(0x8005, 0x0000, true, true, 0x0000); 
    uint16_t crc = crc16.calculate(data, length);
    std::cout << "CRC-16/ARC: 0x" << std::hex << crc  << std::endl;

    // CRC-16/CDMA2000
    crc16 = Crc16Msb(0xC867, 0xFFFF, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/CDMA2000: 0x" << std::hex << crc  << std::endl;

    // CRC-16/CMS
    crc16 = Crc16Msb(0x8005, 0xFFFF, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/CMS: 0x" << std::hex << crc  << std::endl;

    // CRC-16/DDS-110
    crc16 = Crc16Msb(0x8005, 0x800D, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/DDS-110: 0x" << std::hex << crc  << std::endl;

    // CRC-16/DECT-R
    crc16 = Crc16Msb(0x0589, 0x0000, false, false, 0x0001);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/DECT-R: 0x" << std::hex << crc  << std::endl;

    // CRC-16/DECT-X
    crc16 = Crc16Msb(0x0589, 0x0000, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/DECT-X: 0x" << std::hex << crc  << std::endl;

    // CRC-16/DNP
    crc16 = Crc16Msb(0x3D65, 0x0000, true, true, 0xFFFF);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/DNP: 0x" << std::hex << crc  << std::endl;

    // CRC-16/EN-13757
    crc16 = Crc16Msb(0x3D65, 0x0000, false, false, 0xFFFF);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/EN-13757: 0x" << std::hex << crc  << std::endl;

    // CRC-16/GENIBUS
    crc16 = Crc16Msb(0x1021, 0xFFFF, false, false, 0xFFFF);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/GENIBUS: 0x" << std::hex << crc  << std::endl;

    // CRC-16/GSM
    crc16 = Crc16Msb(0x1021, 0x0000, false, false, 0xFFFF);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/GSM: 0x" << std::hex << crc  << std::endl;

    // CRC-16/IBM-3740
    crc16 = Crc16Msb(0x1021, 0xFFFF, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/IBM-3740: 0x" << std::hex << crc  << std::endl;

    // CRC-16/IBM-SDLC
    crc16 = Crc16Msb(0x1021, 0xFFFF, true, true, 0xFFFF);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/IBM-SDLC: 0x" << std::hex << crc  << std::endl;

    // CRC-16/ISO-IEC-14443-3-A
    crc16 = Crc16Msb(0x1021, 0xC6C6, true, true, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/ISO-IEC-14443-3-A: 0x" << std::hex << crc  << std::endl;

    // CRC-16/KERMIT
    crc16 = Crc16Msb(0x1021, 0x0000, true, true, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/KERMIT: 0x" << std::hex << crc  << std::endl;

    // CRC-16/LJ1200
    crc16 = Crc16Msb(0x6F63, 0x0000, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/LJ1200: 0x" << std::hex << crc  << std::endl;

    // CRC-16/M17
    crc16 = Crc16Msb(0x5935, 0xFFFF, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/M17: 0x" << std::hex << crc  << std::endl;

    // CRC-16/MAXIM-DOW
    crc16 = Crc16Msb(0x8005, 0x0000, true, true, 0xFFFF);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/MAXIM-DOW: 0x" << std::hex << crc  << std::endl;

    // CRC-16/MCRF4XX
    crc16 = Crc16Msb(0x1021, 0xFFFF, true, true, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/MCRF4XX: 0x" << std::hex << crc  << std::endl;

    // CRC-16/MODBUS
    crc16 = Crc16Msb(0x8005, 0xFFFF, true, true, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/MODBUS: 0x" << std::hex << crc  << std::endl;

    // CRC-16/NRSC-5
    crc16 = Crc16Msb(0x080B, 0xFFFF, true, true, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/NRSC-5: 0x" << std::hex << crc  << std::endl;

    // CRC-16/OPENSAFETY-A
    crc16 = Crc16Msb(0x5935, 0x0000, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/OPENSAFETY-A: 0x" << std::hex << crc  << std::endl;

    // CRC-16/OPENSAFETY-B
    crc16 = Crc16Msb(0x755B, 0x0000, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/OPENSAFETY-B: 0x" << std::hex << crc  << std::endl;

    // CRC-16/PROFIBUS
    crc16 = Crc16Msb(0x1DCF, 0xFFFF, false, false, 0xFFFF);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/PROFIBUS: 0x" << std::hex << crc  << std::endl;

    // CRC-16/RIELLO
    crc16 = Crc16Msb(0x1021, 0xB2AA, true, true, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/RIELLO: 0x" << std::hex << crc  << std::endl;

    // CRC-16/SPI-FUJITSU
    crc16 = Crc16Msb(0x1021, 0x1D0F, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/SPI-FUJITSU: 0x" << std::hex << crc  << std::endl;

    // CRC-16/T10-DIF
    crc16 = Crc16Msb(0x8BB7, 0x0000, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/T10-DIF: 0x" << std::hex << crc  << std::endl;

    // CRC-16/TELEDISK
    crc16 = Crc16Msb(0xA097, 0x0000, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/TELEDISK: 0x" << std::hex << crc  << std::endl;

    // CRC-16/TMS37157
    crc16 = Crc16Msb(0x1021, 0x89EC, true, true, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/TMS37157: 0x" << std::hex << crc  << std::endl;

    // CRC-16/UMTS
    crc16 = Crc16Msb(0x8005, 0x0000, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/UMTS: 0x" << std::hex << crc  << std::endl;

    // CRC-16/USB
    crc16 = Crc16Msb(0x8005, 0xFFFF, true, true, 0xFFFF);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/USB: 0x" << std::hex << crc  << std::endl;

    // CRC-16/XMODEM
    crc16 = Crc16Msb(0x1021, 0x0000, false, false, 0x0000);
    crc = crc16.calculate(data, length);
    std::cout << "CRC-16/XMODEM: 0x" << std::hex << crc  << std::endl;

    return 0;
}