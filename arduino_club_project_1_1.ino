// Definojmë pinin ku lidhet LED-i
int led = 12;  

void setup() {
  // Vendosim pinin e LED-it si OUTPUT (për ta ndezur dhe fikur)
  pinMode(led, OUTPUT);
}

void loop() {
  // Ndezim LED-in
  digitalWrite(led, HIGH);   
  delay(1000); // Presim 1000 milisekonda (1 sekondë) që LED-i të qëndrojë ndezur

  // Fikim LED-in
  digitalWrite(led, LOW);    
  delay(200); // Presim 200 milisekonda (0.2 sekonda) që LED-i të qëndrojë fikur
}
