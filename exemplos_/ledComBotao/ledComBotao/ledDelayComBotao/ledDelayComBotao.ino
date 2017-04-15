//Acende LED com botao precionado e se mantem ligado por alguns segundos

int led = 13;
int botton = 8;
int stats = 0;

void setup(){

  pinMode(led, OUTPUT);
  pinMode(botton, INPUT);
  
}

void loop(){

  stats = digitalRead(botton);
  
  if(stats == 1){
    digitalWrite(13, 1);
    delay(10000);
  }else
    digitalWrite(13, 0);

}
