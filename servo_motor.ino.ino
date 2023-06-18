#include <Servo.h>

Servo servo_7;

void setup()
{
  servo_7.attach(7);

}

void loop()
{
  servo_7.write(150);
  delay(1000); // Wait for 1000 millisecond(s)
  if (servo_7.read() > 80) {
    servo_7.write(0);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    servo_7.write(90);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  delay(1000); // Wait for 1000 millisecond(s)
}