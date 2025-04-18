// Buzzer Alarm using Ultrasonic Sensor and Arduino
#define TRIG_PIN 6 // Ultrasonic sensor trigger pin
#define ECHO_PIN 5 // Ultrasonic sensor echo pin
#define BUZZER 2 // Buzzer connected to pin 3
void setup() {
pinMode(TRIG_PIN, OUTPUT); // Set trigger pin as output
pinMode(ECHO_PIN, INPUT); // Set echo pin as input
pinMode(BUZZER, OUTPUT); // Set buzzer pin as output
Serial.begin(9600); // Initialize serial monitor
}
void loop() {
// Send ultrasonic pulse
digitalWrite(TRIG_PIN, LOW);
delayMicroseconds(2);
digitalWrite(TRIG_PIN, HIGH);
delayMicroseconds(10);
digitalWrite(TRIG_PIN, LOW);
// Measure pulse duration
long duration = pulseIn(ECHO_PIN, HIGH);
// Calculate distance in cm
float distance = duration * 0.034 / 2;
Serial.print("Distance: ");
Serial.print(distance);
Serial.println(" cm");
// Continuous buzzer sound if object is closer than 10 cm
if (distance < 10) {
digitalWrite(BUZZER, HIGH); // Keep buzzer ON
} else {
digitalWrite(BUZZER, LOW); // Turn buzzer OFF
}
delay(100); // Short delay to ensure continuous detection
}
