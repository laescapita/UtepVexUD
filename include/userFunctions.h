#include "vex.h"
#include "robot-config.h"

void clawOpen() 
{ 
    ClawLeftMotor.spin(vex::directionType::fwd, 75, vex::velocityUnits::pct);
    ClawRightMotor.spin(vex::directionType::fwd, 75, vex::velocityUnits::pct);
} 

void clawClose()
{ 
    ClawLeftMotor.spin(vex::directionType::rev,75, vex::velocityUnits::pct);
    ClawRightMotor.spin(vex::directionType::rev,75, vex::velocityUnits::pct);
}

void clawStop()
{
  ClawLeftMotor.stop();
  ClawRightMotor.stop();
}

void liftUp()
{ 
    LeftLiftMotor.spin(vex::directionType::fwd,50, vex::velocityUnits::pct);
    RightLiftMotor.spin(vex::directionType::fwd,50, vex::velocityUnits::pct);
} 
 
void liftDown()
{ 
    LeftLiftMotor.spin(vex::directionType::rev,50, vex::velocityUnits::pct);
    RightLiftMotor.spin(vex::directionType::rev,50, vex::velocityUnits::pct);
} 

void liftStop()
{
  LeftLiftMotor.stop();
  RightLiftMotor.stop();
}

void joyStickDrive(int Ax2Pos,int Ax3Pos)
{ 
    FRightMotor.spin(vex::directionType::fwd, (Ax2Pos )/2, vex::velocityUnits::pct);
    FLeftMotor.spin(vex::directionType::fwd, (Ax3Pos )/2, vex::velocityUnits::pct);
    BRightMotor.spin(vex::directionType::fwd, (Ax2Pos )/2, vex::velocityUnits::pct);
    BLeftMotor.spin(vex::directionType::fwd, (Ax3Pos )/2, vex::velocityUnits::pct);

    // if(Controller1.ButtonDown.pressing())
      // {
      //   autonBlue();
      // }
      
      if(Controller1.ButtonL1.pressing())
      {
        clawClose();
      }
      else if(Controller1.ButtonL2.pressing())
      {
        clawOpen();
      }
      else
      {
        clawStop();
      }

      if(Controller1.ButtonR2.pressing())
      {
        liftUp();
      }
      else if(Controller1.ButtonR1.pressing())
      {
        liftDown();
      }
      else
      {
        liftStop();
      }


}