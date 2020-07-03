int LED = 13;
int PULSADOR = 2;
int INTERRUPCION = 0; 
volatile int  estado = LOW;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(PULSADOR, INPUT);
  attachInterrupt(digitalPinToInterrupt(PULSADOR), manejadorPulsador,RISING);
  digitalWrite(LED, estado);
}

void manejadorPulsador(){
  estado = !estado;
}

void loop(){
  digitalWrite(LED, estado);
}
