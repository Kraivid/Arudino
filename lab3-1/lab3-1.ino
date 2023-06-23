void setup() {
  pinMode(16,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  analogWrite(16,100);
  analogWrite(5,300);
  analogWrite(4,500);
}
