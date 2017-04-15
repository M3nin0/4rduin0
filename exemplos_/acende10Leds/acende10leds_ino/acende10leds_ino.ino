// Programa para ligar 10 leds

int leds[10] = {1,2,3,4,5,6,7,8,9,10};

void setup(){

  for(int i = 0; i <= 9; i++)
    pinMode(leds[i], OUTPUT);
}

void loop(){
  
  for(int i = 0;i < 9999;i++){

    
    for(int p = 0; p <= 10; p++){
      digitalWrite(p,HIGH);
      delay(1000);  
    }
     
    for(int j = 10; j >= 0;j--){
      digitalWrite(j,LOW);
      delay(1000);  
    }
  
  }

}
