// Primeiro exemplo para acender LED =D

//Definindo valores dos itens que serao utilizados

int led = 13;

void setup(){ //Funcao das configuracoes e definicoes
  
  pinMode(led, OUTPUT);
  

}

void loop(){ //Funcao das acoes que serao realizadas
   
   //HIGH = Envia sinal 1 para o pino
   //LOW = Envia sinal 0 para o pino
     
   digitalWrite(13,HIGH); //Acende led
   delay(50); //Delay para o proximo passo. Em ms
   digitalWrite(13,LOW); //Desliga led
   delay(50); //Delay para voltar no inicio do loop. 
    

}
