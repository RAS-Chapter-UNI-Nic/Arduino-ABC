int ledPin = 4;
int buttonApin = 9;

void setup(){
pinMode(ledPin, OUTPUT);
pinMode(buttonApin, INPUT_PULLUP);
}

void loop(){
while(digitalRead(buttonApin)==LOW) {
  digitalWrite(ledPin, HIGH);

}
digitalWrite(ledPin, LOW);

              
}
