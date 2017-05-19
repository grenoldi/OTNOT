/*
      Programa de testes para o robo seguidor de linha OTNOT, 
      
                  Projetado pela equipe FEG - ROBÓTICA

                  Programado por Guilherme "Bob" Renoldi

                                              11/05/2017
*/

int PWMA = 5;
int AIN2 = 6;
int AIN1 = 7;
int STBY = 8;
int BIN1 = 9;
int BIN2 = 10;
int PWMB = 11;

void setup() {
  Serial.begin(9600);
  pinMode(PWMB, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(STBY, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);
 
}

void loop() {
  digitalWrite(STBY, HIGH);
  /*
      Combinações de chaves dos motores:

      BIN1 L && BIN2 H = roda direita pra tras
      BIN1 H && BIN2 L = roda direita pra frente

      AIN1 L && AIN2 H = roda esquerda pra tras
      AIN1 H && AIN2 L = roda esquerda pra frente
  */

  
  //Teste de Motores:
  // FRENTE
  /*
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 100);
  */

  //FRENTE
  /* 
  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  analogWrite(PWMB, 100);
  */

  //TRAS
  /* 
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, 100);
  */

  //TRAS
  /*
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, 100);
  */
  
  //Teste Sensores
  
  int lineSensors[7] = {0,0,0,0,0,0,0};
  int i;
  int leitura;
  for (i = 0; i < 7; i++){
    leitura = analogRead(i);
    if(i == 0 || i == 1){
      if(leitura >800) lineSensors[i] = 1;
      else lineSensors[i] = 0;
    }
    else{
      if(leitura > 800)lineSensors[i] = 1;
      else lineSensors[i] = 0;
    }
    Serial.println(lineSensors[i]);
  }
  Serial.println("===========================");
  delay(5000);
  
}
