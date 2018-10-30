void setup(){
  pinMode(4,OUTPUT);     //Configuramos el pin 4 como salida, donde está conectado un LED.
}

void loop(){
  digitalWrite(4,HIGH);       //Decimos que se encienda el LED
  delay(100);                //Esperamos un segundo (1000ms)
  digitalWrite(4,LOW);       //Decimos que se apague el LED
  delay(100);               //Esperamos un segundo
}
