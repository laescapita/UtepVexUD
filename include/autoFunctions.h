#include "robot-config.h"
#include "vex.h"

void moveForward(double velocity, double distance, rotationUnits rev)
{
  FRightMotor.resetPosition();
  while(FRightMotor.position(rev) <= distance)
  {
    FRightMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::rpm);
    FLeftMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::rpm);
    BRightMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::rpm);
    BLeftMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::rpm);
    
  }

  FRightMotor.stop();
  FLeftMotor.stop();
  BRightMotor.stop();
  BLeftMotor.stop();
} 

void moveBack(double velocity, double distance, rotationUnits rev)
{
  FRightMotor.resetPosition();
  while(FRightMotor.position(rev) >= -distance)
  {
    FRightMotor.spin(vex::directionType::rev, velocity, vex::velocityUnits::rpm);
    FLeftMotor.spin(vex::directionType::rev, velocity, vex::velocityUnits::rpm);
    BRightMotor.spin(vex::directionType::rev, velocity, vex::velocityUnits::rpm);
    BLeftMotor.spin(vex::directionType::rev, velocity, vex::velocityUnits::rpm);
    
  }

  FRightMotor.stop();
  FLeftMotor.stop();
  BRightMotor.stop();
  BLeftMotor.stop();
} 

void moveForward(double velocity, double seconds)
{ 
  Brain.resetTimer();
  double startTime = Brain.timer(vex::timeUnits::sec);
  while(startTime <= seconds)
  {
    FRightMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::rpm);
    FLeftMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::rpm);
  }

}

void autonBlue(void) {

  Brain.Screen.print("Blue Autonmous is-a-go");

  moveForward(50, 3, rev);

  moveBack(50, 2, rev);

  Brain.Screen.newLine();
  Brain.Screen.print("Autonmous has ended");
}

void autonRed(void) {
  
  Brain.Screen.print("Red Autonmous is-a-go");

  moveForward(50, 3, rev);

  moveBack(50, 2, rev);

  Brain.Screen.newLine();
  Brain.Screen.print("Autonmous has ended");
}