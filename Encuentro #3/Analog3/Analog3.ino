int potPin = 0;
void setup()
{
Serial.begin(9600);
pinMode(4,OUTPUT); 
}
void loop()
{
int reading = analogRead(potPin);
if(reading >= 0 && reading < 256){
  Serial.println("Me Congelo");
  digitalWrite(4,HIGH);
  } 
  else{
  if(reading >= 256 && reading < 512){
  Serial.println("Me Voy de sueter");
  } else{
  if(reading >= 512 && reading < 768){
  Serial.println("Esta lindo el dia");
  } else{
  if(reading >= 768 && reading < 1024){
  Serial.println("Pareciera el HELL");
  }
  }
  }
  }
delay(500);
}
