void setup() {
  pinMode(5,INPUT);
  pinMode(7,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int buttonState = digitalRead(5);
  if (buttonState == HIGH) {
    digitalWrite(7,HIGH);
    Serial.println(buttonState);
  }
  else {
    digitalWrite(7,LOW);
    Serial.println(buttonState);
  }
}
