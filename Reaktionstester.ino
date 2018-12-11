const int buttonPin = 9;
#include <Pins.h>


                                        
Pins Pins(2,3,4,5,6,7,8,buttonPin);

void setup(){
  Pins.startAnimation();
  Serial.begin(9600);
  }

  
void loop(){
  if (digitalRead(buttonPin) == HIGH){
  Pins.reaktion();
  Pins.zeitAnzeige();
    }
  }
  
