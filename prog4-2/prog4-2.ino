//岩永拓也　17232016
#include <LiquidCrystal.h>

LiquidCrystal lcd( 7, 6, 3, 2, 1, 0 );
const int SW_PIN = 9;
int sw_state = LOW;  

 int sw0_flag=0;
 int sw1_flag=0;

void setup() {
  pinMode(SW_PIN,INPUT);
   lcd.begin( 16, 2 );

   
}

void loop() {
sw_state = digitalRead( SW_PIN );
if(sw_state==HIGH){
  sw1_flag=0;
  if(sw0_flag==0){lcd.clear();}
  lcd.setCursor(0, 0);
  lcd.print("YOUR NAME");
  sw0_flag=1;
}else{
  sw0_flag=0;
  if(sw1_flag==0){lcd.clear();}
  lcd.setCursor(0, 0);
  lcd.print("17232016");
  sw1_flag=1;
}
  
}
