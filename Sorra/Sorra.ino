
void setup() {
  // put your setup code here, to run once:
  for(int x = 2; x < 8; x++) {
    pinMode(x,OUTPUT);
  }
  pinMode(8,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int EstadodelInterruptor = digitalRead(8);
  if(EstadodelInterruptor == HIGH) {
    int i = 2;
    while(i < 8) {
      digitalWrite(i,HIGH);
      delay(10000);
      i++;
    }
    EstadodelInterruptor = digitalRead(8);
    while(EstadodelInterruptor != HIGH) {
      i = 2;
      while(i < 8) {
      digitalWrite(i,LOW);
      i++;
      }
      delay(50);
      i = 2;
      while(i < 8) {
      digitalWrite(i,HIGH);
      i++;
      }
      delay(50);
      EstadodelInterruptor = digitalRead(8);
    }
    i = 2;
    while(i < 8) {
    digitalWrite(i,LOW);
    i++;      
    }
    
  }
}

