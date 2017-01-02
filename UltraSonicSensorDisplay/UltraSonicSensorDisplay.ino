#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C pantalla(0x27,16,2);
//PANTALLA CONECTADA AL SDA-20 SCL-21
#define trigPin 22
#define echoPin 23
#define led 25
#define led2 24

void setup() {
  Serial.begin (9600);
  pantalla.begin();
  pantalla.backlight();
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 6) {  
    digitalWrite(led,HIGH);
    digitalWrite(led2,LOW);
  }
  else {
    digitalWrite(led,LOW);
    digitalWrite(led2,HIGH);
  }
  if (distance >= 200 || distance <= 0){
    pantalla.println("Out of range");
  }
  else {
    pantalla.print(distance);
    pantalla.print(" cm");
  }
  delay(500);
  pantalla.clear();
}
