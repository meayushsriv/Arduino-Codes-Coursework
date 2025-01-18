#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int lm35Pin = A1;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int sensorValue = analogRead(lm35Pin);
    float voltage = (sensorValue * 5.0) / 1024.0;
    float temperatureC = voltage * 100;
    float temperatureK = temperatureC + 273;

    Serial.print("Temperature: ");
    Serial.print(temperatureK);
    Serial.println(" K");

    delay(1000);
}
