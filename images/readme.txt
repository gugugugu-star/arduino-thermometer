# Arduino 温度计

## 功能
- DS18B20 读取温度
- LCD1602 实时显示

## 硬件
- Arduino UNO
- DS18B20 温度传感器（防水探头 + 转接板）
- LCD1602（并口，16 脚）
- 220Ω 电阻

## 库
- OneWire
- DallasTemperature
- LiquidCrystal

## 接线
| LCD 脚 | UNO |
|---|---|
| 1 VSS | GND |
| 2 VDD | 5V |
| 4 RS | D12 |
| 5 RW | GND |
| 6 E | D11 |
| 11 D4 | D5 |
| 12 D5 | D4 |
| 13 D6 | D3 |
| 14 D7 | D6 |
| 15 A | 5V（串 220Ω） |
| 16 K | GND |

DS18B20：DAT→D2，VCC→5V，GND→GND
