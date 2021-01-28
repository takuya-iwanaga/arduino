//岩永拓也　17232016
int pin    = 0;  //センサーのピン番号
int get_a0 = 0;  //センサーデータ取得用

void setup(){
  Serial.begin(38400);
}

void loop()                     
{
  get_a0 = analogRead(pin);  // 照度センサーからデータを取得
  Serial.println(get_a0);    // シリアルモニタに出力
  delay(200);
}
