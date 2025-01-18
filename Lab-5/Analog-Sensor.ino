#include <LiquidCrystal.h>

int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0;
float pv = 0;
String sv = "";

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
    lcd.begin(16, 2);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    sensorValue = analogRead(sensorPin);
    pv = (4.82 * sensorValue) / 1024.0;
    sv = String(sensorValue);

    lcd.setCursor(0, 0);
    lcd.print("Sensor Value: ");
    lcd.print(sv);

    lcd.setCursor(0, 1);
    lcd.print("Voltage: ");
    lcd.print(pv, 3);
    lcd.print(" V");

    Serial.print("Voltage: ");
    Serial.println(pv);

    delay(1000);
}
