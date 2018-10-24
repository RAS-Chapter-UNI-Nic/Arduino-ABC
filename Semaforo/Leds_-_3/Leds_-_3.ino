int estadoBoton=0;           //Guardará el estado del botón (HIGH ó LOW)

void setup(){
  pinMode(4,OUTPUT);     //Configuramos el pin 4 como salida
  pinMode(3,OUTPUT);     //Configuramos el pin 4 como salida
  pinMode(5,OUTPUT);     //Configuramos el pin 4 como salida
  pinMode(8,INPUT);           //Donde está conectado el pulsador
}
void loop(){
 estadoBoton=digitalRead(8);  //Lee el estado del pin 8
  if (estadoBoton == HIGH) {     //Si se detecta que el botón está pulsado,
  digitalWrite(4,HIGH);       //Decimos que se encienda el LED
  delay(1000);                //Esperamos un segundo (100ms)
  digitalWrite(4,LOW);       //Decimos que se apague el LED

  digitalWrite(3,HIGH);       //Decimos que se encienda el LED
  delay(500);                //Esperamos un segundo (10ms)
  digitalWrite(3,LOW);       //Decimos que se apague el LED

  digitalWrite(5,HIGH);       //Decimos que se encienda el LED
  delay(500);                //Esperamos un segundo (50ms)
  digitalWrite(5,LOW);       //Decimos que se apague el LED
}
}
