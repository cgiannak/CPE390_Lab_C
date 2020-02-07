void setup() {
pinMode(5,INPUT);
pinMode(7,OUTPUT);
Serial.begin(115200);
}

void loop() {
 int buttonState = digitalRead(5);
 if (buttonState == 0) {
  Serial.println(buttonState);
  digitalWrite(7,HIGH);
  delay (100);
  digitalWrite(7,LOW);
  delay (100);
 }
 else {
  digitalWrite(7,LOW);
  Serial.println(buttonState);
 }
 }
