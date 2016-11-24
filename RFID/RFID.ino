 #include <LiquidCrystal_I2C.h>
 #include <SPI.h>  
 #include <RFID.h>  
 #define SS_PIN 10  
 #define RST_PIN 5  
 RFID rfid(SS_PIN,RST_PIN);  
 int serNum[5];  
 LiquidCrystal_I2C scr(0x27,16,2);
 
 void setup(){  
  Serial.begin(9600); 
  scr.begin(); 
  scr.noBacklight();
  delay(1000);
  scr.backlight();
  SPI.begin();  
  rfid.init();  
 }  
 void loop(){  
  while(!rfid.isCard()){  
    scr.print("Benvinguts");
    delay(500);
    scr.setCursor(0,1);
    scr.print("Paseu la targeta");
    delay(500);
    scr.clear();
  }
   if(rfid.readCardSerial()) {  
    scr.print(rfid.serNum[0],DEC);  
    scr.print(" ");  
    scr.print(rfid.serNum[1],DEC);  
    scr.print(" ");  
    scr.print(rfid.serNum[2],DEC);  
    scr.print(" ");  
    scr.print(rfid.serNum[3],DEC);  
    scr.print(" ");  
    scr.print(rfid.serNum[4],DEC);  
    scr.println("");  
    delay(2000);
    scr.setCursor(0,1);
    if(rfid.serNum[0] == 89) scr.print("Acces autoritzat");
    else scr.print("Acces denegat!");
    delay(2000);
    scr.clear();
    delay(500);
   }    
  rfid.halt();  
 }  
