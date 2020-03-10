#include "robot-config.h"
#include "vex.h"

void moveForward(double velocity, double distance, rotationUnits rev)
{
  FRightMotor.resetPosition();
  while(FRightMotor.position(rev) <= distance)
  {
    FRightMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::pct);
    FLeftMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::pct);
    BRightMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::pct);
    BLeftMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::pct);
    
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
    FRightMotor.spin(vex::directionType::rev, velocity, vex::velocityUnits::pct);
    FLeftMotor.spin(vex::directionType::rev, velocity, vex::velocityUnits::pct);
    BRightMotor.spin(vex::directionType::rev, velocity, vex::velocityUnits::pct);
    BLeftMotor.spin(vex::directionType::rev, velocity, vex::velocityUnits::pct);
    
  }

  FRightMotor.stop();
  FLeftMotor.stop();
  BRightMotor.stop();
  BLeftMotor.stop();
} 

void infinitePull()
{
  intakeLeftMotor.spin(vex::directionType::fwd, 100, vex::percentUnits::pct);
  intakeRightMotor.spin(vex::directionType::fwd, 100, vex::percentUnits::pct);
}

void infinitePush()
{
  intakeLeftMotor.spin(vex::directionType::rev, 100, vex::percentUnits::pct);
  intakeRightMotor.spin(vex::directionType::rev, 100, vex::percentUnits::pct);
}

void autoIntakeStop()
{
  intakeLeftMotor.stop();
  intakeRightMotor.stop();
}

void autoLiftUp(double velocity, double distance, rotationUnits rev)
{
  RightLiftMotor.resetPosition();
  while(RightLiftMotor.position(rev) <= distance)
  {
    RightLiftMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::pct);
    LeftLiftMotor.spin(vex::directionType::fwd, velocity, vex::velocityUnits::pct);
  }

  RightLiftMotor.stop();
  LeftLiftMotor.stop();
} 

void autoLiftDown(double velocity, double distance, rotationUnits rev)
{
  RightLiftMotor.resetPosition();
  while(RightLiftMotor.position(rev) >= -distance)
  {
    RightLiftMotor.spin(vex::directionType::rev, velocity, vex::velocityUnits::pct);
    LeftLiftMotor.spin(vex::directionType::rev, velocity, vex::velocityUnits::pct);
  }
  
  RightLiftMotor.stop();
  LeftLiftMotor.stop();
} 

void blueAuto(void) {

  Brain.Screen.print("Blue Autonmous is-a-go");

  moveForward(50, 3, rev);

  moveBack(50, 2, rev);

  Brain.Screen.newLine();
  Brain.Screen.print("Autonmous has ended");
}

void redAuto(void) {
  
  Brain.Screen.print("Red Autonmous is-a-go");

  moveForward(50, 3, rev);

  

  Brain.Screen.newLine();
  Brain.Screen.print("Autonmous has ended");
}