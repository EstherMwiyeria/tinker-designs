// C++ code
//
#include <Servo.h>

Servo servo_4;

void setup()
{
  pinMode(A1, INPUT);
  servo_4.attach(4, 500, 2500);

  if ((-40 + 0.488155 * (analogRead(A1) - 20)) > 30) {
    servo_4.write(90);
  }
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance
}