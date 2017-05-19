/*
      Programa para controle de robô seguidor de linha

                programado por Guilherme "Bob" Renoldi
                                            19/05/2017
*/


int PWMA = 5;
int AIN2 = 6;
int AIN1 = 7;
int STBY = 8;
int BIN1 = 9;
int BIN2 = 10;
int PWMB = 11;

void setup() {
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
  
}
