#define SD_CS_PIN 53
#include <UTFT.h>
#include <SPI.h>
#include "SdFat.h"
SdFat SD;
UTFT pant(ITDB50,38,39,40,41);
File image;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pant.InitLCD();
  pant.clrScr();
  Serial.println("Iniciant SD");
  pinMode(53,OUTPUT);
  if (!SD.begin(SD_CS_PIN)) {
    Serial.println("Fallada!");
    return;
  }
  Serial.println("Correcte");
  image = SD.open("exemple.c");
  Serial.print(image);
  if(image) Serial.println("Correcte obert");
  else Serial.println("Incorrecte obrint");
  //extern unsigned int exemple[];
  //pant.drawBitmap(0,0,800,480,exemple);
}

void loop() {
  // put your main code here, to run repeatedly:

}
