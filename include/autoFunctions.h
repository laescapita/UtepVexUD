#include "robot-config.h"
#include "vex.h"

void moveForward(double velocity, double distance, rotationUnits rev)
{
  FRightMotor.resetPosition();
  while(FRightMotor.position(rev) <= distance)
  {
    FRightMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::rpm);
    FLeftMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::rpm);
    
  }
}