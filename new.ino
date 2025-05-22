#include <Servo.h>

const int servoPin = 9;

Servo myServo;

float currentAngle = 0;
bool direction = true;
unsigned long lastMoveTime = 0;
const unsigned long moveInterval = 50;  // adjust for speed

void setup() {
  myServo.attach(servoPin);
  myServo.write(currentAngle);
}

void loop() {
  
  if (millis() - lastMoveTime >= moveInterval) {
    currentAngle += direction ? 1 : -1;
    if (currentAngle >= 180) direction = false;
    if (currentAngle <= 0) direction = true;

    myServo.write(currentAngle);
    lastMoveTime = millis();
  }
}
