#include <SoftwareSerial.h>

#define rxPin 2
#define txPin 3

// Set up a new SoftwareSerial object
SoftwareSerial mySerial =  SoftwareSerial(rxPin, txPin);

void setup() {
  // put your setup code here, to run once:
   pinMode(rxPin, INPUT);
   pinMode(txPin, OUTPUT);
   
   mySerial.begin(19200);
   Serial1.begin (57600);

}

void loop() {
  // put your main code here, to run repeatedly:
   if (mySerial.available() > 0)
       Serial1.write(mySerial.read());
}
