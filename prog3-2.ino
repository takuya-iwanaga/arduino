//岩永拓也　17232016
int b_pin = 7;   
int state = 0; 

int blue1=12;
int led1=13; // LEDのピン番号
int blue2=11;
int led2=9;
int yellow=10;

int yflag=0;
int rflag2=0;
int bflag1=0;
int rflag1=0;
int i=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);  
  pinMode(b_pin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(blue1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(blue2, OUTPUT);
  pinMode(yellow, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(b_pin);  // ピンよりデータ取得
  if(state == 1){
    digitalWrite(blue2,LOW);
    if(yflag==0){
      digitalWrite(yellow,HIGH);
      delay(1000);
    }
    digitalWrite(yellow,LOW);
    yflag=1;
    digitalWrite(led2,HIGH);
    if(rflag2==0){delay(1000);}
    rflag2=1;
    digitalWrite(led1,LOW);
    digitalWrite(blue1,HIGH);
    bflag1=1;
    rflag1=1;
  }else{
    if(bflag1==1){
      for(i=0;i<10;i++){
        digitalWrite(blue1,LOW);
        delay(200);
        digitalWrite(blue1,HIGH);
        delay(200);
        }
      }
    digitalWrite(blue1,LOW);
    digitalWrite(led1,HIGH);
    if(rflag1==1){delay(2000);}
    digitalWrite(led2,LOW);
    digitalWrite(blue2,HIGH);
    yflag=0;
    rflag2=0;
    bflag1=0;
    rflag1=0;
  }
}
