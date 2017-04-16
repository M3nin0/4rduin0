//Semafaro com arduino

int pGo = 8;
int pWarning = 9;
int pStop = 10;
int botton = 2;
int stats = 0;

void setup(){

  pinMode(pGo, OUTPUT);
  pinMode(pWarning, OUTPUT);
  pinMode(pStop, OUTPUT);
  pinMode(botton, INPUT);

}

void loop(){
  
  stats = digitalRead(botton);

  if(stats == 0){
    digitalWrite(pStop, LOW);
    digitalWrite(pWarning, LOW); 
    digitalWrite(pGo, HIGH);
    delay(10000);
  }
  stats = digitalRead(botton);
  if(stats == 0){
    digitalWrite(pGo, LOW);
    digitalWrite(pWarning, HIGH);
    digitalWrite(pStop, LOW);
    delay(5000);
  }
  stats = digitalRead(botton);
  if(stats == 0){
    digitalWrite(pGo, LOW);
    digitalWrite(pWarning, LOW);
    digitalWrite(pStop, HIGH);
    delay(10000);
  }else{
    digitalWrite(pGo, LOW);
    digitalWrite(pWarning, LOW);
    digitalWrite(pStop, HIGH);
    delay(10000);
  }
  stats = digitalRead(botton);
  
  
}
