// Servo Motor Control using Arduino
#include <Servo.h>
#define SERVO_PIN 10 // Servo motor connected to pin 9
Servo myServo; // Create a Servo object
void setup() {
myServo.attach(SERVO_PIN); // Attach the servo to pin 9
}
void loop() {
myServo.write(0); // Move servo to 0°
delay(1000); // Wait 1 second
myServo.write(90); // Move servo to 90°
delay(1000); // Wait 1 second
myServo.write(180); // Move servo to 180°
delay(1000); // Wait 1 second
}