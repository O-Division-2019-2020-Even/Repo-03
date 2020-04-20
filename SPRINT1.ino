
#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
// create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  servo1.attach(3);
  servo2.attach(4);
  servo3.attach(5);
  servo4.attach(6);
  servo5.attach(7);
  servo6.attach(8);
}

void loop() {
  for (pos = 0; pos <= 40; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);
    servo6.write(pos);
    // tell servo to go to position in variable 'pos'
    delay(8);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 40; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);
    servo6.write(pos);
    // tell servo to go to position in variable 'pos'
    delay(8);                       // waits 15ms for the servo to reach the position
  }
}
