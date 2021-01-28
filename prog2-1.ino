//岩永拓也　17232016
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i=0;i<10;i++){
    digitalWrite(2, HIGH);
   delay(500);
   digitalWrite(2, LOW);
   delay(500);
    }
  digitalWrite(2, HIGH);
   delay(5000);
   digitalWrite(2, LOW);

}
