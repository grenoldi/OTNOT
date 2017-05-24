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

int lineSensors = {0,0,0,0,0,0,0};

double setPoint = 4.0;

double P = 0.0,  // parte Proporcional
       I = 0.0,  // parte Integral
       D = 0.0;  // parte Derivativa

double kP = 1.0,  // constante Proporcional
       kI = 0.0,  // constante Integral 
       kD = 0.0;  // constante Diferencial

double pos = 0.0; // posição relativa do seguidor

double err = 0.0; // erro com relação ao 

void setup() {
  pinMode(PWMB, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(STBY, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);  
}

void readSensors(){
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
}

double getPosition(){
    int i, cont = 0;
    double pos = 0.0;
    for (i = 0; i < 7; i++){
        if (i != 0 && i!= 1 && lineSensors[i] == 1){
            pos += i;
            cont += 1;
        }
    }
    pos /= cont;
    return pos;
}

void moverMotor(char side, int speed){
    if (side == 'a'){
        digitalWrite(AIN1, HIGH);
        digitalWrite(AIN2, LOW);
        analogWrite(PWMA, speed);
    }
    else if(side == 'b'){
         digitalWrite(BIN1, HIGH);
         digitalWrite(BIN2, LOW);
         analogWrite(PWMA, speed);
    }
}

void controlaMotor(double PID){
    
}

void loop() {
    digitalWrite(STBY, HIGH);
  
}
