const int switchPin = 2;
const int motorPin = 9;
int switchState = 0;

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(switchPin, OUTPUT);
}

void loop() {
  switchState = digitalRead(switchPin);
  
  if (switchState == HIGH) {
    digitalWrite(motorPin, HIGH);
  } 
  else {
    digitalWrite(motorPin, LOW);
  }
}
