// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  // Formação F
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // desligar
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  // formação O
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(6, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // desligar
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(8, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  // formação X
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // desligar
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}