int val = 0;
void setup() {
  pinMode(16,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 val= analogRead(14);
 Serial.print("val = ");
  Serial.println(val);
  if (val < 200) {
    digitalWrite(16,500);
    digitalWrite(5,0);
    digitalWrite(4,0);
  }
  else if (val >= 200) {
    digitalWrite(16,0);
    digitalWrite(5,500);
    digitalWrite(4,0);
  }
  else if (val > 500) {
    digitalWrite(16,0);
    digitalWrite(5,0);
    digitalWrite(4,500);
  }
  delay(300);
}
