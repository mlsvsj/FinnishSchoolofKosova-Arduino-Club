// C++ code
//
int led1=11;
int led2=9;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(300);
  digitalWrite(led2, LOW);
}