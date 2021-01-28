//岩永拓也　17232016
int b_pin = 7;   
int state = 0; 

int led  = 12; // LEDのピン番号

void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);  
  pinMode(b_pin, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(b_pin);  // ピンよりデータ取得
  if(state == 1){
    digitalWrite(led,HIGH);  // 1つ目のLEDを点灯
  }else{
    digitalWrite(led,LOW);
  }
}
