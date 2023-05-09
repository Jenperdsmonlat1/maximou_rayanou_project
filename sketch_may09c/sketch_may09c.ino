float valeur = 0;

void setup() {}

void loop() {
  valeur = analogRead(A3);
  valeur = valeur / 1023;
  digitalWrite(4,HIGH);
  delayMicroseconds(1000+valeur*1000);
  digitalWrite(4,LOW);
  delay(19-valeur);}
