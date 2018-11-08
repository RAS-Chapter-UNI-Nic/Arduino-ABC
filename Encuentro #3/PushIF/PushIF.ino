int botonState=0;
int ledPinG = 4;
int ledPinR = 3;
int ledPinB = 2;
int buttonApin = 9;

void setup(){
pinMode(ledPinG, OUTPUT);
pinMode(ledPinB, OUTPUT);
pinMode(ledPinR, OUTPUT);
pinMode(buttonApin, INPUT_PULLUP);
}

void loop(){
if (digitalRead(buttonApin) == 0) {
    // el operador % significa modulo
    botonState = (botonState + 1);
    delay(200);
    if (botonState==4){ 
      botonState=0;     
    }
  }

  if(botonState==1){
    digitalWrite(ledPinG, HIGH);
    digitalWrite(ledPinR, LOW);
    digitalWrite(ledPinB, LOW);

  }
  if(botonState==2){
    digitalWrite(ledPinG, LOW);
    digitalWrite(ledPinR, HIGH);
    digitalWrite(ledPinB, LOW);

  }
    if(botonState==3){
    digitalWrite(ledPinG, LOW);
    digitalWrite(ledPinR, LOW);
    digitalWrite(ledPinB, HIGH);

  }
              
}
