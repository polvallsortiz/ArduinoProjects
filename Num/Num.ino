
void setup() {
  for(int i = 3; i < 11; i++){
    pinMode(i,OUTPUT);
  }
  for(int t = 3; t < 11; t++){
    digitalWrite(t,HIGH);
  }
  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int z = 3; z < 11; z++){
    digitalWrite(z,LOW);
  }
  //9
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(1000);
  for(int z = 3; z < 11; z++){
    digitalWrite(z,LOW);
  }
  //8
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(1000);
  for(int z = 3; z < 11; z++){
    digitalWrite(z,LOW);
  }
  //7
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay(1000);
  for(int z = 3; z < 11; z++){
    digitalWrite(z,LOW);
  }
  //6
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(1000);
  for(int z = 3; z < 11; z++){
    digitalWrite(z,LOW);
  }
  //5
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(1000);
  for(int z = 3; z < 11; z++){
    digitalWrite(z,LOW);
  }
  //4
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(1000);
  for(int z = 3; z < 11; z++){
    digitalWrite(z,LOW);
  }
  //3
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  delay(1000);
  for(int z = 3; z < 11; z++){
    digitalWrite(z,LOW);
  }
  //2
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);;
  digitalWrite(9,HIGH);
  delay(1000);
  for(int z = 3; z < 11; z++){
    digitalWrite(z,LOW);
  }
  //1
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay(1000);
  for(int z = 3; z < 11; z++){
    digitalWrite(z,LOW);
  }
}
