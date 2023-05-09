float valeur = 0;

void setup() {}

void loop() {
  valeur = analogRead(A3);
  valeur = valeur / 1023;
  digitalWrite(4,HIGH);
  analogWrite(A5,1023);
  delayMicroseconds(1000+valeur*1000);
  digitalWrite(4,LOW);
  analogWrite(A5,0);
  delay(19-valeur);
}
