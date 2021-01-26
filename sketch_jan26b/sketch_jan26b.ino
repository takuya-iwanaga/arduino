//岩永拓也 17232016
#define STEPROTATION 2048

#include <Stepper.h>
int b_pin = 6;   
int state = 0; 

Stepper myStepper(STEPROTATION , 8, 9, 10, 11);    //(1)

void setup() { 
  pinMode(b_pin, INPUT);
  myStepper.setSpeed(15);//(2)
}

void loop() {
  myStepper.step(512);    // 512ステップで90度回転
  
  // 静止時には電流を遮断する。 
  digitalWrite(8,  LOW); 
  digitalWrite(9,  LOW); 
  digitalWrite(10, LOW); 
  digitalWrite(11, LOW); 
  
  delay(1000);
}
