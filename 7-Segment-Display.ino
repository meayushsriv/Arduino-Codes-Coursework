void setup()
{
    for (int pin = 2; pin <= 9; pin++)
    {
        pinMode(pin, OUTPUT);
    }
}

void loop()
{
    for (int i = 0; i <= 9; i++)
    {
        switch (i)
        {
        case 0:
            digitalWrite(2, LOW);
            digitalWrite(3, LOW);
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
            digitalWrite(6, LOW);
            digitalWrite(7, LOW);
            digitalWrite(8, HIGH);
            digitalWrite(9, HIGH);
            break;
        case 1:
            digitalWrite(2, HIGH);
            digitalWrite(3, LOW);
            digitalWrite(4, LOW);
            digitalWrite(5, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(7, HIGH);
            digitalWrite(8, HIGH);
            digitalWrite(9, HIGH);
            break;
        case 2:
            digitalWrite(2, LOW);
            digitalWrite(3, LOW);
            digitalWrite(4, HIGH);
            digitalWrite(5, LOW);
            digitalWrite(6, LOW);
            digitalWrite(7, HIGH);
            digitalWrite(8, LOW);
            digitalWrite(9, HIGH);
            break;
        case 3:
            digitalWrite(2, LOW);
            digitalWrite(3, LOW);
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
            digitalWrite(6, HIGH);
            digitalWrite(7, HIGH);
            digitalWrite(8, LOW);
            digitalWrite(9, HIGH);
            break;
        case 4:
            digitalWrite(2, HIGH);
            digitalWrite(3, LOW);
            digitalWrite(4, LOW);
            digitalWrite(5, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(7, LOW);
            digitalWrite(8, LOW);
            digitalWrite(9, HIGH);
            break;
        case 5:
            digitalWrite(2, LOW);
            digitalWrite(3, HIGH);
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
            digitalWrite(6, HIGH);
            digitalWrite(7, LOW);
            digitalWrite(8, LOW);
            digitalWrite(9, HIGH);
            break;
        case 6:
            digitalWrite(2, LOW);
            digitalWrite(3, HIGH);
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
            digitalWrite(6, LOW);
            digitalWrite(7, LOW);
            digitalWrite(8, LOW);
            digitalWrite(9, HIGH);
            break;
        case 7:
            digitalWrite(2, LOW);
            digitalWrite(3, LOW);
            digitalWrite(4, LOW);
            digitalWrite(5, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(7, HIGH);
            digitalWrite(8, HIGH);
            digitalWrite(9, HIGH);
            break;
        case 8:
            digitalWrite(2, LOW);
            digitalWrite(3, LOW);
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
            digitalWrite(6, LOW);
            digitalWrite(7, LOW);
            digitalWrite(8, LOW);
            digitalWrite(9, HIGH);
            break;
        case 9:
            digitalWrite(2, LOW);
            digitalWrite(3, LOW);
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
            digitalWrite(6, HIGH);
            digitalWrite(7, LOW);
            digitalWrite(8, LOW);
            digitalWrite(9, HIGH);
            break;
        }
        delay(1000);
    }
}
