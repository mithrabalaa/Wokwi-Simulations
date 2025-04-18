// Blink an LED connected to pin 4
#define LED 4 // Define LED pin
void setup() {
pinMode(LED, OUTPUT); // Set LED pin as output
}
void loop() {
digitalWrite(LED, HIGH); // Turn LED on
delay(3000); // Wait 3 seconds
digitalWrite(LED, LOW); // Turn LED off
delay(1000); // Wait 1 second
}