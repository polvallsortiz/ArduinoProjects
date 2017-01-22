/*
  SD card read/write
 This example shows how to read and write data to and from an SD card file
 The circuit:
 * SD card attached to SPI bus as follows:
 * G - GND (TERRA)
 * V - 5V/3.3V (VOLTATGE)
 ** DO - pin 50
 ** DI - pin 51
 ** CK - pin 52
 ** CS - pin 53 //MEGA
 created   Nov 2010
 by David A. Mellis
 modified 9 Apr 2012
 by Tom Igoe
 This example code is in the public domain.
 */
#define SD_CS_PIN 53
#include <SPI.h>
//#include <SD.h>
#include "SdFat.h"
SdFat SD;

File myFile;

void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  
  // Wait for USB Serial 
  while (!Serial) {
    SysCall::yield();
  }

  Serial.print("Initializing SD card...");
  // On the Ethernet Shield, CS is pin 4. It's set as an output by default.
  // Note that even if it's not used as the CS pin, the hardware SS pin
  // (10 on most Arduino boards, 53 on the Mega) must be left as an output
  // or the SD library functions will not work.
  pinMode(53, OUTPUT);

  if (!SD.begin(SD_CS_PIN)) {
    Serial.println("initialization failed!");
    return;
  }
  Serial.println("initialization done.");

  // open the file. note that only one file can be open at a time,
  // so you have to close this one before opening another.
  myFile = SD.open("testdefinitiu2.txt", FILE_WRITE);

  // if the file opened okay, write to it:
  if (myFile) {
    Serial.print("Escrivint a testdefinitiu2.txt....");
    myFile.println("POL VALLS PROVA");
    // close the file:
    myFile.close();
    Serial.println("fet.");
  } else {
    // if the file didn't open, print an error:
    Serial.println("error obrint testdefinitiu2.txt");
  }

  // re-open the file for reading:
  myFile = SD.open("testdefinitiu2.txt");
  if (myFile) {
    Serial.println("testdefinitiu2.txt:");

    // read from the file until there's nothing else in it:
    while (myFile.available()) {
      Serial.write(myFile.read());
    }
    // close the file:
    myFile.close();
  } else {
    // if the file didn't open, print an error:
    Serial.println("error obrint testdefinitiu2.txt");
  }
}

void loop()
{
  // nothing happens after setup
}
