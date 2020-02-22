#include "vex.h"
#include "robot-config.h"

void joyStickDrive(int Ax1Pos,int Ax3Pos)
{ 
    if(Controller1.Axis3.value())
    {
      FLeftMotor.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::rpm );
      FRightMotor.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::rpm );
    }
    else if(Controller1.Axis1.value() > 0) //Turn Right
    {
      FLeftMotor.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::rpm );
      FRightMotor.spin(vex::directionType::rev, Controller1.Axis3.value(), vex::velocityUnits::rpm );
    }
    else if(Controller1.Axis1.value() < 0) //Turn Left
    {
      FLeftMotor.spin(vex::directionType::rev, Controller1.Axis3.value(), vex::velocityUnits::rpm );
      FRightMotor.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::rpm );
    }
    else
    {
      FLeftMotor.stop();
      FRightMotor.stop();
    }

}

void clawOpen() 
{ 
    ClawLeftMotor.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
    ClawRightMotor.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} 

void clawClose()
{ 
    ClawLeftMotor.spin(vex::directionType::rev,100, vex::velocityUnits::pct);
    ClawRightMotor.spin(vex::directionType::rev,100, vex::velocityUnits::pct);
}

void clawStop()
{
  ClawLeftMotor.stop();
  ClawRightMotor.stop();
}

void liftUp()
{ 
    LeftLiftMotor.spin(vex::directionType::fwd,80, vex::velocityUnits::pct);
    RightLiftMotor.spin(vex::directionType::fwd,80, vex::velocityUnits::pct);
} 
 
void liftDown()
{ 
    ClawLeftMotor.spin(vex::directionType::rev,80, vex::velocityUnits::pct);
    ClawRightMotor.spin(vex::directionType::rev,80, vex::velocityUnits::pct);
} 

void liftStop()
{
  LeftLiftMotor.stop();
  RightLiftMotor.stop();
}