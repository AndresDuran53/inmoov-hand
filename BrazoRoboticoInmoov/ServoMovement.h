class ServoMovement{

  private:

  Servo servo; //Objeto servo tipo Servo al que le envio el movimiento

  public:
 
  int posActual = 90;
  int pin;
  int posMin;
  int posMax;

  ServoMovement(int pPin, int pPosMin, int pPosMax){
    pin = pPin;
    posMin = pPosMin;
    posMax = pPosMax;
    
  }

  void init(){
    servo.attach(pin);
  }

  void setPosActual(int newPos){
    posActual = newPos;
  }

  void moverGrados(int cantGrados){
    setPosActual(posActual+cantGrados);
    moveServo();
  }

  void moverPorcentaje(int porcentaje){    
    int nuevaPos = map(porcentaje,0,100,posMin,posMax);
    setPosActual(nuevaPos);
    moveServo();
  }

  void moveServo(){
    servo.write(posActual);
  }
  
};

