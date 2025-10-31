void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  // Vermelho
  digitalWrite(13, HIGH);
  delay(6000); 
  digitalWrite(13, LOW);

  // Verde
  digitalWrite(11, HIGH);
  delay(4000); 
  digitalWrite(11, LOW);

  // Amarelo
  digitalWrite(12, HIGH);
  delay(2000); 
  digitalWrite(12, LOW);
}