#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); //    ( RS, EN, d4, d5, d6, d7)

void setup()  
   {
       lcd.begin(16, 2); // Fijar el numero de caracteres y de filas
       lcd.print("Prometec.net"); // Enviar el mensaje
   }

void loop() 
   {
       lcd.setCursor(0, 8);  // set the cursor to column 0, line 1
       lcd.print(millis() / 1000);  // print the number of seconds since reset:
   }
