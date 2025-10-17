// C++ code
//
void setup()
{
  pinMode(A0, OUTPUT);
}

void loop()
{
  digitalWrite(A0, HIGH);
  delay(100);
  Serial.println('Piscou');
  digitalWrite(A0, LOW);
  delay(100);
  Serial.println('Apagou');

}