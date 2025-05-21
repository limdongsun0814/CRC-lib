#include <crc16_en_13757.h>

void setup() {
    Serial.begin(9600); 
    uint8_t data[] = {0x01, 0x03, 0x00, 0x00, 0x00, 0x02}; 
    uint8_t length = sizeof(data);
    uint16_t crc = calculate(data, length);
    Serial.print("CRC16-EN-13757: 0x");
    Serial.println(crc, HEX); 
}

void loop()
{ 
}