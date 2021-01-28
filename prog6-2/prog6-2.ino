//岩永拓也 17232016
#include <Arduino.h>
#include <Simple_HCSR04.h>

const int ECHO_PIN = 2; /// the pin at which the sensor echo is connected
const int TRIG_PIN = 3; /// the pin at which the sensor trig is connected

Simple_HCSR04 *sensor;

#include <LiquidCrystal.h>

LiquidCrystal lcd( 13, 12, 11, 10, 9, 8 );
void setup() {
  // put your setup code here, to run once:
  lcd.begin( 16, 2 );
  sensor = new Simple_HCSR04(ECHO_PIN, TRIG_PIN);
}
void loop() {
  // put your main code here, to run repeatedly:
  unsigned long distance = sensor->measure()->cm();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(distance);
  lcd.print("cm");
  delay(500);

}
