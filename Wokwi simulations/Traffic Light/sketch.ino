// Traffic Light System using Arduino
#define RED 7 // Red LED connected to pin 11
#define YELLOW 6 // Yellow LED connected to pin 10
#define GREEN 5 // Green LED connected to pin 9
void setup() {
pinMode(RED, OUTPUT); // Set Red LED as output
pinMode(YELLOW, OUTPUT); // Set Yellow LED as output
pinMode(GREEN, OUTPUT); // Set Green LED as output
}
void loop() {
digitalWrite(YELLOW, LOW); // Turn Yellow LED OFF
digitalWrite(RED, HIGH); // Turn Red LED ON (Stop)
delay(5000); // Wait 5 seconds
digitalWrite(RED, LOW); // Turn Red LED OFF
}