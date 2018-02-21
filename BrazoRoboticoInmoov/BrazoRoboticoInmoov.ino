
#include <Servo.h>
#include "ServoMovement.h"

ServoMovement servoPulgar(2,5,175);
ServoMovement servoIndice(3,20,180);
ServoMovement servoMedio(4,0,180);
ServoMovement servoAnular(5,60,180);
ServoMovement servoMennique(6,80,180);
ServoMovement servoMunneca(7,15,165);

void setup() {
  Serial.begin(9600);
  initServos();  
  movimientosInit();
}

void loop() {
  movimientosInit();
  delay(1000);
}

void initServos(){
  servoPulgar.init();
  servoIndice.init();
  servoMedio.init();
  servoAnular.init();
  servoMennique.init();
  servoMunneca.init();
}

void movimientosInit(){
  for (int i = 0; i<100;i++){
    servoPulgar.moverPorcentaje(i);
    servoIndice.moverPorcentaje(i);
    servoMedio.moverPorcentaje(i);
    servoAnular.moverPorcentaje(i);
    servoMennique.moverPorcentaje(i);
    servoMunneca.moverPorcentaje(i*10);
    delay(15); 
  }
  for (int i = 100; i>0;i--){
    servoPulgar.moverPorcentaje(i);
    servoIndice.moverPorcentaje(i);
    servoMedio.moverPorcentaje(i);
    servoAnular.moverPorcentaje(i);
    servoMennique.moverPorcentaje(i);
    servoMunneca.moverPorcentaje(i*10);
    delay(15); 
  }
}

