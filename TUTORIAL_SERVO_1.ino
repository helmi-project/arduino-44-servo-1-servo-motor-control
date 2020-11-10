/*
 * TUTORIAL SERVO PADA ARDUINO
 * MENGGERAKKAN SERVO
 * 
 * Pinout  :
 * Kabel coklat servo -> GND
 * Kabel coklat merah -> VCC
 * Kabel coklat kuning -> SDA (atau A4)
 * 
 * 
 */

#include <Servo.h>
int servoPin = A4;
 
Servo servo;  
 
int servoAngle = 0; 

void setup() {
  Serial.begin(115200); //memulai komunikasi serial pada baud rate 115200
  delay(100);
  Serial.println("Menggerakkan servo pada Arduino");
  servo.attach(servoPin);

}

void loop() {
   servo.write(45);      // Turn SG90 servo Left to 45 degrees
   delay(1000);          // Wait 1 second
   servo.write(90);      // Turn SG90 servo back to 90 degrees (center position)
   delay(1000);          // Wait 1 second
   servo.write(135);     // Turn SG90 servo Right to 135 degrees
   delay(1000);          // Wait 1 second
   servo.write(90);      // Turn SG90 servo back to 90 degrees (center position)
   delay(1000);

}
