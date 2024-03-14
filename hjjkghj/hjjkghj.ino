void setup() {
  Serial.begin(9600);
  int i = 1;
  for (i; i <= 10; i++) {
    Serial.print("for i : ");
    Serial.print(i);
    Serial.println("Hi,edi1");
  }
}

void loop() {
}
