#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal.h>

#define ONE_WIRE_BUS 2
LiquidCrystal lcd(12, 11, 5, 4, 3, 6);

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.setCursor(0, 1);
  lcd.print("--.-- C");
}

void loop() {
  sensors.requestTemperatures();
  float t = sensors.getTempCByIndex(0);
  lcd.setCursor(0, 1);
  if (t <= -100) { lcd.print("No sensor!   "); }
  else { lcd.print(t, 2); lcd.print(" C      "); }
  Serial.print("Temp: "); Serial.print(t, 2); Serial.println(" C");
  delay(1000);
}