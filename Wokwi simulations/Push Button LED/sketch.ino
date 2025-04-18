// Button-controlled LED using Arduino
#define BUTTON_PIN 2 // Push button connected to pin 2
#define LED_PIN 7 // External LED connected to pin 7
void setup() {
pinMode(LED_PIN, OUTPUT); // Set LED pin as output
pinMode(BUTTON_PIN, INPUT_PULLUP); // Enable internal pull-up resistor
}
void loop() {
if (digitalRead(BUTTON_PIN) == LOW) { // Check if button is pressed
digitalWrite(LED_PIN, HIGH); // Turn LED ON
} else {
digitalWrite(LED_PIN, LOW); // Turn LED OFF
}
}