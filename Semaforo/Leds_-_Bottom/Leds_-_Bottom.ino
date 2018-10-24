int estadoBoton=0;           //Guardará el estado del botón (HIGH ó LOW)

void setup(){
pinMode(4,OUTPUT);       //Donde está conectado el LED
pinMode(8,INPUT);           //Donde está conectado el pulsador
}

void loop() {
  estadoBoton=digitalRead(8);  //Lee el estado del pin 8
  if (estadoBoton == HIGH) {  //Si se detecta que el botón está pulsado, se enciende el LED
  digitalWrite(4,HIGH);
  delay(10);
  digitalWrite(4,LOW);
  delay(10);
} else {                             //Si no esta pulsado lo apaga
  digitalWrite(4,LOW);
  }




}
