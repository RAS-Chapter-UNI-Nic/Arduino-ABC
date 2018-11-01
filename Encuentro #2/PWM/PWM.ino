int ledPin = 6;
int value =0;

void setup(){
}

void loop(){
for (value=0; value<=255; value++)
{
  analogWrite(ledPin, value);
  delay(20);
}
              
}
