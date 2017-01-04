#include <UTFT.h>
UTFT pant(ITDB50,38,39,40,41);
extern uint8_t Ubuntu[];
#define trigPin 9
#define echoPin 10
#define volt 8

void setup() {
  pant.InitLCD();
  pant.setFont(Ubuntu);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(volt, OUTPUT);
  digitalWrite(volt,HIGH);
}

void loop() {
  pant.fillScr(VGA_YELLOW);
  pant.setColor(VGA_SILVER);
  pant.setBackColor(VGA_YELLOW);
  long duration, distance;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance >= 200 || distance <= 0){
    pant.print("Out of range",400,304);
  }
  else {
    pant.printNumI(distance,400,304);
  }
}
