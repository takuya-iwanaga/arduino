//岩永拓也　17232016
#include <LiquidCrystal.h>

LiquidCrystal lcd( 7, 6, 3, 2, 1, 0);

void setup() {
  // put your setup code here, to run once:
  lcd.begin( 16, 2 );
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hello world");
  lcd.setCursor(0,1);
  lcd.print("YOUR NAME");


}

void loop() {
  // put your main code here, to run repeatedly:

}
