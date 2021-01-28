//岩永拓也　17232016
#include <LiquidCrystal.h>

LiquidCrystal lcd( 7, 6, 3, 2, 1, 0 );
int pin    = 0;  //センサーのピン番号
int get_a0 = 0;  //センサーデータ取得用
void setup() {
  // put your setup code here, to run once:
  lcd.begin( 16, 2 );
}

void loop() {
  // put your main code here, to run repeatedly:
  get_a0 = analogRead(pin);  // 照度センサーからデータを取得
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(get_a0);
  delay(500);
}
