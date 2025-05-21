#include <crc16_iso_iec_14443_3_a.h>

void setup() {
    Serial.begin(9600); 
    uint8_t data[] = {0x01, 0x03, 0x00, 0x00, 0x00, 0x02}; 
    uint8_t length = sizeof(data);
    uint16_t crc = calculate(data, length);
    Serial.print("CRC16-ISO-IEC-14443-3-A: 0x");
    Serial.println(crc, HEX); 
}

void loop()
{ 
}