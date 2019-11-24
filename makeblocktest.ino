#include "MeOrion.h"
#include <Wire.h>
#include <SoftwareSerial.h>

MeDCMotor motor1(M1);
MeDCMotor motor2(M2);
uint8_t motorSpeed=150;

//MeUltrasonicSensor sensors;
MeUltrasonicSensor ultraSensor2(PORT_7);
//int distance;
int distance2;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  /*
  Serial.print("Distance: ");
  Serial.print(ultraSensor2.distanceCm() );
  Serial.println(" cm");
  delay(100);
  */
  
  //distance = ultraSensor.distanceCm();
  distance2 = ultraSensor2.distanceCm();
  /*
  if (distance < 25) 
  {
    motor1.run(-motorSpeed);
    motor2.run(motorSpeed);
    delay(500);
    motor1.run(motorSpeed*2);
    motor2.run(motorSpeed*2);
    delay(1500);
  }
  else
  */
  if (distance2 < 25)
  {
    motor1.run(-motorSpeed);
    motor2.run(motorSpeed);
    delay(500);
    motor1.run(motorSpeed*2);
    motor2.run(motorSpeed*2);
    delay(1500);
  }
  else 
  {
    motor1.run(motorSpeed);
    motor2.run(-motorSpeed);
    delay(100);
  }

 
}
