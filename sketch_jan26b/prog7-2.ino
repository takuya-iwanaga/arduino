//岩永拓也 17232016
#define STEPROTATION 2048

#include <Stepper.h>
int SW_PIN = 6;   
int sw_state = LOW;

 int sw0_flag=0;


Stepper myStepper(STEPROTATION , 8, 9, 10, 11);    //(1)

void setup() { 
  pinMode(SW_PIN, INPUT);
  myStepper.setSpeed(2);//(2)
}

void loop() {

  sw_state = digitalRead( SW_PIN );
if(sw_state==HIGH){
 if(sw0_flag==0){myStepper.step(521); }
  sw0_flag=1;
}else{
  // 静止時には電流を遮断する。 
  digitalWrite(8,  LOW); 
  digitalWrite(9,  LOW); 
  digitalWrite(10, LOW); 
  digitalWrite(11, LOW);
  sw0_flag=0;
}
}
