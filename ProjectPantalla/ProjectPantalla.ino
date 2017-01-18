#include <UTFT.h>

// Declare which fonts we will be using
extern uint8_t BigFont[];
UTFT pant(ITDB50,38,39,40,41);

void setup()
{
  randomSeed(analogRead(0));
// Setup the LCD
  pant.InitLCD(0);
  pant.setFont(BigFont);
}

void loop()
{
  int x = pant.getFontXsize();
  pant.printNumI(x,0,0);
  pant.setBrightness(5);
  pant.fillScr(VGA_FUCHSIA);
  delay(1000);
  pant.setBrightness(16);
  delay(1000);
  pant.clrScr();
  pant.setColor(VGA_AQUA);
  pant.setBrightness(5);
  pant.print("TUPAC",400,240,0);
  delay(500);
  pant.setBrightness(16);
  pant.setColor(VGA_LIME);
  pant.drawLine(0,0,800,0);
  pant.fillCircle(400,240,100);
  delay(3000);
  pant.clrScr();
  pant.setColor(VGA_NAVY);
  pant.drawRoundRect(119,0,400,3004);
  delay(1000);
}
