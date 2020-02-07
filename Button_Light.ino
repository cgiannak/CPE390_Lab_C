void setup() {
  pinMode(5,INPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  int buttonState = digitalRead(5);
  if (buttonState == HIGH) {
    digitalWrite(7,HIGH);
  }
  else {
    digitalWrite(7,LOW);
    Serial.println(buttonState);
  }
}
