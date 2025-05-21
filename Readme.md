# CRC 계산 라이브러리

<div>
<img src="https://img.shields.io/badge/c++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/></img>
<img src="https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white"/></img>
</div>

## ✨ 소개

이 라이브러리는 C++로 구현된 다양한 CRC (Cyclic Redundancy Check) 알고리즘 계산 기능을 제공합니다. 데이터 무결성 검증을 위해 필요한 CRC 값을 쉽고 효율적으로 계산할 수 있습니다.

주요 특징:

- 매개변수 기반 커스텀 CRC 지원
- MSB/LSB 우선 처리 (RefIn/RefOut) 지원

## 🚀 기능

- 지원하는 CRC 알고리즘 종류 및 매개변수:
  - CRC-16 (예: CRC16/MODBUS, CRC16/ARC, CRC16/CDMA2000, CRC16/CMS, CRC16 등)
  - **주요 매개변수 지원:** Polynomial, Initial Value, RefIn, RefOut, XOR Out

## 💡 사용법

1. 적절한 해더파일과 cpp 파일 프로젝트에 추가해주세요.
   - 선택 방법
     - 주요 매개변수를 이용하려면 CRC16_lsb, CRC16_msb를 추가해주세요.
     - 특정 CRC 알고리즘을 설정할려면 CRC16_modbus 처럼 CRC16_XX를 추가해주세요.

## ⚖ 예시

```cpp
    //1. 객체를 생성해주세요.
    //왼쪽 부터 (Polynomial, Initial Value, RefIn, RefOut, XOR Out)
    CRC16 crc16 = CRC16(0x8005, 0x0000, true, true, 0x0000);
    //2. calculate 매소드를 사용해서 crc를 계산해주세요.
    //왼쪽 부터 (게산할 데이터, 데이터 길이)
    uint16_t crc = crc16.calculate(data, length);
```

```cpp
    //1. calculate 매소드를 사용해서 crc를 계산해주세요.
    //왼쪽 부터 (게산할 데이터, 데이터 길이)
    uint16_t crc = CRC16Modbus::calculate(data,length);
```

## 📦 참고 사항

https://crccalc.com/
