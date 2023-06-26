void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0));
  analogWrite(10,analogRead(A0));
}
