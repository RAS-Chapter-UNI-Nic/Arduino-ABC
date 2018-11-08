int ledPin = 4;
int buttonApin = 9;
int buttonBpin = 10;

void setup(){
pinMode(ledPin, OUTPUT);
pinMode(buttonApin, INPUT_PULLUP);
pinMode(buttonBpin, INPUT_PULLUP);
}

void loop(){
  if (digitalRead(buttonApin) == LOW)
{
  digitalWrite(ledPin, LOW);
  delay(50);
}
  if (digitalRead(buttonBpin) == LOW)
{
  digitalWrite(ledPin, HIGH);
}
              
}
