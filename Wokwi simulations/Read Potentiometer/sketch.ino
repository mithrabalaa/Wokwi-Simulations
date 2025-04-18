void setup() {
  Serial.begin(9600); // Initialize serial monitor
}

void loop() {
  int potValue = analogRead(A1); // Read analog value (0-1023)
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);
  delay(200); // Slow down output for easier reading
}
