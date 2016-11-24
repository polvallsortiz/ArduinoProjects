#include <LiquidCrystal_I2C.h>
int level;
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  lcd.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
  level = analogRead(A0);
  Serial.print(level);
  Serial.print(" ");
  if(level < 600) {
    lcd.print("No hi ha suficient");
    lcd.setCursor(0,1);
    lcd.print("aigüa");
    lcd.clear();
  }
  else {
    lcd.print("Hi ha aigüa");
    lcd.setCursor(0,1);
    lcd.print("suficient");
    delay(500);
    lcd.clear();
  }

}
