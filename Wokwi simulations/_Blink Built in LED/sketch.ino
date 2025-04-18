// Blink built-in LED
#define LED_PIN LED_BUILTIN // Define built-in LED pin
void setup() {
pinMode(LED_PIN, OUTPUT); // Set LED pin as output
}
void loop() {
digitalWrite(LED_PIN, HIGH); // Turn LED on
delay(1000); // Wait 1 second
digitalWrite(LED_PIN, LOW); // Turn LED off
delay(1000); // Wait 1 second
}