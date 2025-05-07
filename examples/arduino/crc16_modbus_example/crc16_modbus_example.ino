#include <CRC16_modbus.h>

void setup() {
    Serial.begin(9600); 
    uint8_t data[] = {0x01, 0x03, 0x00, 0x00, 0x00, 0x02}; 
    uint8_t length = sizeof(data);
    uint16_t crc = CRC16Modbus::calculate(data, length);
    Serial.print("CRC-16 Modbus: 0x");
    Serial.println(crc, HEX); 
}

void loop()
{ 
}