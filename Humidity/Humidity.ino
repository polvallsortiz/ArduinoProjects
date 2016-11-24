#include <LiquidCrystal_I2C.h>

//KY015 DHT11 Temperature and humidity sensor 
LiquidCrystal_I2C screen(0x27,16,2);
byte dat [5];
 
 
void setup () {
  Serial.begin (9600);
  pinMode (8, OUTPUT);
  screen.begin();
  screen.print("ESTACIO METEO");
  delay(600);
  screen.setCursor(0,1);
  screen.print("El Polete");
  delay(700);
  screen.clear();
  int i = 0;
  while (i!=1) {
    delay(1000);
    screen.print("BASURA");
    delay(1000);
    screen.setCursor(0,1);
    screen.print("PUTABASURA SHIT");
    delay(1000);
    screen.clear();
  }
}
 
void loop () {
  while(!digitalRead(8)) {
    
  }
  screen.print ("Current humdity =");
  screen.print (dat [1]); // display the humidity decimal places;
  screen.println ('%');
  delay(1000);
  screen.clear();
  screen.print ("Current temperature =");
  screen.print (dat [3]); // display the temperature of decimal places;
  screen.println ('C');
  delay (1000);
}
