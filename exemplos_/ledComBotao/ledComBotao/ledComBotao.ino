//Acende e apaga LED quando botao e precionado

int led = 13; // Pino utilizado pelo LED
int botton = 8; //Pino utilizado pelo botao
int stats = 0; //Status de uso do led

void setup(){
  
  pinMode(led, OUTPUT); // Saida do LED
  pinMode(botton, INPUT); // Entreda do botao

}

void loop(){

  // Atribui o valor do status do botao a variavel
  stats = digitalRead(botton); 
  
  if(stats == HIGH)
     digitalWrite(led, HIGH); 
  else
      digitalWrite(led, LOW);  
 
}
