int potPin = 0;
void setup()
{
}
void loop()
{
int reading = analogRead(potPin);
int prescaling = reading/4;
 analogWrite(6, prescaling);
  delay(20);
}
