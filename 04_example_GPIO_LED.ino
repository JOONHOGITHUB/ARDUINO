#define LIGHT 7

void setup(){
  pinMode(LIGHT,OUTPUT);
  digitalWrite(LIGHT,false);
  delay(1000);
}

void loop(){
  for(int i = 0; i < 5; i++){
    digitalWrite(LIGHT,true);
    delay(100);
    digitalWrite(LIGHT,false);
    delay(100);
  }
  digitalWrite(LIGHT,true);
  while(true);
}
  
