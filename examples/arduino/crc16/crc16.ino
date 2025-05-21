#include <Crc16Msb.h>
uint8_t data[] = {0x01, 0x03, 0x00, 0x00, 0x00, 0x02}; 
uint8_t length = sizeof(data);
int cnt = 0;
void setup() {
    Serial.begin(9600); 

    // CRC-16/ARC
    Crc16Msb CRC16=Crc16Msb::Crc16Msb(0x8005, 0x0000, true, true, 0x0000);
    uint16_t crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/ARC: 0x");
    Serial.println(crc, HEX);

    // CRC-16/CDMA2000
    CRC16=Crc16Msb::Crc16Msb(0xC867, 0xFFFF, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/CDMA2000: 0x");
    Serial.println(crc, HEX);

    // CRC-16/CMS
    CRC16=Crc16Msb::Crc16Msb(0x8005, 0xFFFF, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/CMS: 0x");
    Serial.println(crc, HEX);

    // CRC-16/DDS-110
    CRC16=Crc16Msb::Crc16Msb(0x8005, 0x800D, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/DDS-110: 0x");
    Serial.println(crc, HEX);

    // CRC-16/DECT-R
    CRC16=Crc16Msb::Crc16Msb(0x0589, 0x0000, false, false, 0x0001);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/DECT-R: 0x");
    Serial.println(crc, HEX);

    // CRC-16/DECT-X
    CRC16=Crc16Msb::Crc16Msb(0x0589, 0x0000, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/DECT-X: 0x");
    Serial.println(crc, HEX);

    // CRC-16/DNP
    CRC16=Crc16Msb::Crc16Msb(0x3D65, 0x0000, true, true, 0xFFFF);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/DNP: 0x");
    Serial.println(crc, HEX);

    // CRC-16/EN-13757
    CRC16=Crc16Msb::Crc16Msb(0x3D65, 0x0000, false, false, 0xFFFF);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/EN-13757: 0x");
    Serial.println(crc, HEX);

    // CRC-16/GENIBUS
    CRC16=Crc16Msb::Crc16Msb(0x1021, 0xFFFF, false, false, 0xFFFF);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/GENIBUS: 0x");
    Serial.println(crc, HEX);

    // CRC-16/GSM
    CRC16=Crc16Msb::Crc16Msb(0x1021, 0x0000, false, false, 0xFFFF);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/GSM: 0x");
    Serial.println(crc, HEX);

    // CRC-16/IBM-3740
    CRC16=Crc16Msb::Crc16Msb(0x1021, 0xFFFF, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/IBM-3740: 0x");
    Serial.println(crc, HEX);

    // CRC-16/IBM-SDLC
    CRC16=Crc16Msb::Crc16Msb(0x1021, 0xFFFF, true, true, 0xFFFF);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/IBM-SDLC: 0x");
    Serial.println(crc, HEX);

    // CRC-16/ISO-IEC-14443-3-A
    CRC16=Crc16Msb::Crc16Msb(0x1021, 0xC6C6, true, true, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/ISO-IEC-14443-3-A: 0x");
    Serial.println(crc, HEX);

    // CRC-16/KERMIT
    CRC16=Crc16Msb::Crc16Msb(0x1021, 0x0000, true, true, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/KERMIT: 0x");
    Serial.println(crc, HEX);

    // CRC-16/LJ1200
    CRC16=Crc16Msb::Crc16Msb(0x6F63, 0x0000, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/LJ1200: 0x");
    Serial.println(crc, HEX);

    // CRC-16/M17
    CRC16=Crc16Msb::Crc16Msb(0x5935, 0xFFFF, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/M17: 0x");
    Serial.println(crc, HEX);

    // CRC-16/MAXIM-DOW
    CRC16=Crc16Msb::Crc16Msb(0x8005, 0x0000, true, true, 0xFFFF);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/MAXIM-DOW: 0x");
    Serial.println(crc, HEX);

    // CRC-16/MCRF4XX
    CRC16=Crc16Msb::Crc16Msb(0x1021, 0xFFFF, true, true, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/MCRF4XX: 0x");
    Serial.println(crc, HEX);

    // CRC-16/MODBUS
    CRC16=Crc16Msb::Crc16Msb(0x8005, 0xFFFF, true, true, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/MODBUS: 0x");
    Serial.println(crc, HEX);

    // CRC-16/NRSC-5
    CRC16=Crc16Msb::Crc16Msb(0x080B, 0xFFFF, true, true, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/NRSC-5: 0x");
    Serial.println(crc, HEX);

    // CRC-16/OPENSAFETY-A
    CRC16=Crc16Msb::Crc16Msb(0x5935, 0x0000, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/OPENSAFETY-A: 0x");
    Serial.println(crc, HEX);

    // CRC-16/OPENSAFETY-B
    CRC16=Crc16Msb::Crc16Msb(0x755B, 0x0000, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/OPENSAFETY-B: 0x");
    Serial.println(crc, HEX);

    // CRC-16/PROFIBUS
    CRC16=Crc16Msb::Crc16Msb(0x1DCF, 0xFFFF, false, false, 0xFFFF);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/PROFIBUS: 0x");
    Serial.println(crc, HEX);

    // CRC-16/RIELLO
    CRC16=Crc16Msb::Crc16Msb(0x1021, 0xB2AA, true, true, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/RIELLO: 0x");
    Serial.println(crc, HEX);

    // CRC-16/SPI-FUJITSU
    CRC16=Crc16Msb::Crc16Msb(0x1021, 0x1D0F, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/SPI-FUJITSU: 0x");
    Serial.println(crc, HEX);

    // CRC-16/T10-DIF
    CRC16=Crc16Msb::Crc16Msb(0x8BB7, 0x0000, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/T10-DIF: 0x");
    Serial.println(crc, HEX);

    // CRC-16/TELEDISK
    CRC16=Crc16Msb::Crc16Msb(0xA097, 0x0000, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/TELEDISK: 0x");
    Serial.println(crc, HEX);

    // CRC-16/TMS37157
    CRC16=Crc16Msb::Crc16Msb(0x1021, 0x89EC, true, true, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/TMS37157: 0x");
    Serial.println(crc, HEX);

    // CRC-16/UMTS
    CRC16=Crc16Msb::Crc16Msb(0x8005, 0x0000, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/UMTS: 0x");
    Serial.println(crc, HEX);

    // CRC-16/USB
    CRC16=Crc16Msb::Crc16Msb(0x8005, 0xFFFF, true, true, 0xFFFF);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/USB: 0x");
    Serial.println(crc, HEX);

    // CRC-16/XMODEM
    CRC16=Crc16Msb::Crc16Msb(0x1021, 0x0000, false, false, 0x0000);
    crc = CRC16.calculate(data, length);
    Serial.print("CRC-16/XMODEM: 0x");
    Serial.println(crc, HEX);
}

void loop()
{}