int R = 14;
int G = 12;
int B = 13;

void setup() {
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
  Serial.begin(9600);
  pinMode(5, INPUT);
  pinMode(4, INPUT);
  pinMode(0, INPUT);
  pinMode(2, INPUT);
}

void loop() {
  if(digitalRead(5) == LOW){
    digitalWrite(R,500);
    digitalWrite(G,500);
    digitalWrite(B,500);
    Serial.println("White");
    delay(500);
  }
  if(digitalRead(4) == LOW){
    digitalWrite(R,0);
    digitalWrite(G,0);
    digitalWrite(B,500);
    Serial.println("Blue");
    delay(500);
  }
  if(digitalRead(0) == LOW){
    digitalWrite(R,0);
    digitalWrite(G,500);
    digitalWrite(B,0);
    Serial.println("Green");
    delay(500);
  }
  if(digitalRead(2) == LOW){
    digitalWrite(R,500);
    digitalWrite(G,0);
    digitalWrite(B,0);
    Serial.println("Read");
    delay(500);
  }
}
