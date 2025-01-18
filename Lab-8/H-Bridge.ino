const int enablePin = 9;
const int in1Pin = 8; // Motor IN1 pin
const int in2Pin = 7; // Motor IN2 pin

void setup()
{
    pinMode(enablePin, OUTPUT);
    pinMode(in1Pin, OUTPUT);
    pinMode(in2Pin, OUTPUT);

    Serial.begin(9600); // Initialize serial communication
}

void loop()
{
    int speed = 150;      // Motor speed (0-255)
    int delayTime = 1000; // Delay time in milliseconds

    // Move motor forward
    digitalWrite(in1Pin, HIGH);
    digitalWrite(in2Pin, LOW);
    analogWrite(enablePin, speed);
    Serial.println("Motor is moving forward");
    delay(delayTime);

    // Move motor backward
    digitalWrite(in1Pin, LOW);
    digitalWrite(in2Pin, HIGH);
    analogWrite(enablePin, speed);
    Serial.println("Motor is moving backward");
    delay(delayTime);

    // Stop motor
    analogWrite(enablePin, 0);
    Serial.println("Motor stopped");
    delay(delayTime);
}
