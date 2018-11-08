int potPin = 0;
void setup()
{
pinMode(4,OUTPUT); 
}
void loop()
{
int reading = analogRead(potPin);
if(reading <255){
  digitalWrite(4,HIGH);
  } 
  else {
  digitalWrite(4,LOW);    
  }
delay(500);
}
