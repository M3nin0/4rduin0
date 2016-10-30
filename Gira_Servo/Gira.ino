void setup() 
{
  // configura o pino d13 como saída 
  pinMode(13, OUTPUT);
}

void giro(){
   // Girando pra um lado
   digitalWrite(13, HIGH);
   delay(1);
   //Girando pro outro
   digitalWrite(13,LOW);
   delay(5);
}

void giro_2(){
  // Girando pra um lado
  digitalWrite(13, HIGH);
  delay(5);
  //Girando pro outro
  digitalWrite(13,LOW);
  delay(1);
}

void loop() 
{

  giro();
  giro_2();
  /*
  // Configura o pino 3 como HIGH
  digitalWrite(13, HIGH);
  // Espera 5000 ms (5 segundos), ou seja, o LED fica aceso por esse tempo
  delay(1);             
  // Configura o pino 13 como LOW
  digitalWrite(13, LOW);   
  // Espera 1000 ms (1 segundo)
  delay(5);
  */            
}
