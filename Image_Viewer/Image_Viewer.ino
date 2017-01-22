#include <UTFT.h>
UTFT pant(ITDB50,38,39,40,41);

extern unsigned int exemple3[];

void setup() {
  // put your setup code here, to run once:
  pant.InitLCD();
  pant.clrScr();
  pant.drawBitmap(0,0,200,200,exemple3);
}

void loop() {
  // put your main code here, to run repeatedly:

}
