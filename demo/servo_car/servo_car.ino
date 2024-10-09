/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep

 modified 17 Jan 2023
 by Realtek SG

 Example guide:
 https://www.amebaiot.com/en/amebapro2-amb82-mini-arduino-pwm-servo/
*/

#include <AmebaServo.h>

// create servo object to control a servo
// servo objects can be created correspond to PWM pins
AmebaServo myservo;
AmebaServo myservoR;

// variable to store the servo position
int pos = 0;

void setup() {
    myservo.attach(7); //pin8=F7, pin7=F8
    myservoR.attach(8); //pin8=F7, pin7=F8
}

void loop() {
    myservo.write(0);
    myservoR.write(180);
    delay(1000);

    myservo.write(180);
    myservoR.write(0);
    delay(1000);

    myservo.write(90);
    myservoR.write(90);
    delay(5000);
}
