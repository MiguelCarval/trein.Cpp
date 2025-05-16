  // C++ code
#include<Arduino.h>

int ledG = 2;
  int ledY = 3;
  int ledR = 4;
  int sensor = 7;

void setup()
{
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(sensor, INPUT);
  
}

void loop()
{
  digitalWrite(ledG, HIGH);
  
  if(digitalRead(sensor)== HIGH){
  digitalWrite(ledG, LOW);
    delay(1000);
   digitalWrite(ledY,HIGH);
    delay(1000);
   digitalWrite(ledY, LOW);
    delay(1000);
   digitalWrite(ledR, HIGH);
    delay(5000);
   digitalWrite(ledR, LOW);
 
  }else{
   digitalWrite(ledG, HIGH);
  }
}