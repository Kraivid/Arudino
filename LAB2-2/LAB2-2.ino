  int LED[]={16,5,4,2};
void setup() {
pinMode(LED[0],OUTPUT);
pinMode(LED[1],OUTPUT);
pinMode(LED[2],OUTPUT);
pinMode(LED[3],OUTPUT);
pinMode(14,OUTPUT);
}
void LED_Rail() {
  for(int i=0;i<=3;i++){
    digitalWrite(LED[i],HIGH);
    delay(1000);
    digitalWrite(LED[i],LOW);
  }
  digitalWrite(14,HIGH);
  delay(500);
  digitalWrite(14,LOW);
}

void loop() {
  LED_Rail();
}
