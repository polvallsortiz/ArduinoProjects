#include <LiquidCrystal_I2C.h>
#include <Key.h>
#include <Keypad.h>
LiquidCrystal_I2C pantalla(0x27,16,2);
const byte ROWS = 4; // Four rows
const byte COLS = 4; // Three columns
// Define the Keymap
char keys[ROWS][COLS] = {
  {'O','/','P','9'},
  {'+','6','7','8'},
  {'-','3','4','5'},
  {'*','0','1','2'}
};
// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte rowPins[ROWS] = { 9, 8, 7, 6 };
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { 13,12, 11, 10 }; 

// Create the Keypad
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

#define ledpin 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pantalla.begin();
  pantalla.backlight();
  pantalla.print("Benvingut a la");
  pantalla.setCursor(0,1);
  pantalla.print("Calculadora INT");
  delay(2000);
  pantalla.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
    pantalla.cursor();
    char key = kpd.getKey();
    while(key!='9' && key!='8' && key!='7' && key!='6' && key!='5' && key!='4' && key!='3' && key!='2' && key!='1' && key!='0'){
      key = kpd.getKey();
    }
    pantalla.print(key);
    char key1 = kpd.getKey();
    while(key1!='/' && key1!='P' && key1!='*' && key1!='+' && key1!='-'){
      key1 = kpd.getKey();
    }
    pantalla.print(key1);
    char key2 = kpd.getKey();
    while(key2!='9' && key2!='8' && key2!='7' && key2!='6' && key2!='5' && key2!='4' && key2!='3' && key2!='2' && key2!='1' && key2!='0'){
      key2 = kpd.getKey();
    }
    pantalla.print(key2);
    pantalla.print("=");
    int k1 = key - '0';
    int k2 = key2 - '0';
    if(key1 == '/') {
      float res = (float)k1/(float)k2;
      pantalla.print(res);
    }
    if(key1 == '*') pantalla.print(k1*k2);
    if(key1 == '+') pantalla.print(k1+k2);
    if(key1 == '-') pantalla.print(k1-k2);
    if(key1 == 'P') pantalla.print(pow(k1,k2));
    key1 = kpd.getKey();
    while(key1!='O') {
      key1 = kpd.getKey();
    }
    pantalla.clear();
}
