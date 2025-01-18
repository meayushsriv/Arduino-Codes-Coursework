#include <LiquidCrystal.h>
String entry;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup()
{
    Serial.begin(9600);
    lcd.begin(16, 2);
}
void loop()
{
    if (Serial.available())
    {
        entry = Serial.readStringUntil('\n');
    }
    lcd.clear();
    lcd.println(entry);
}
