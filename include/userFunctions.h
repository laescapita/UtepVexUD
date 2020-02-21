#include "vex.h"
#include "robot-config.h"

void joyStickDrive(int Ax1Pos,int Ax3Pos)
{ 
    if(Controller1.Axis3.value()){ 
    FRightMotor.spin(vex::directionType::fwd,Controller1.Axis3.value(), vex::velocityUnits::pct);
    FLeftMotor.spin(vex::directionType::fwd,Controller1.Axis3.value(), vex::velocityUnits::pct);
    // BRightMotor.spin(vex::directionType::fwd,Controller1.Axis3.value(), vex::velocityUnits::pct);
    // BLeftMotor.spin(vex::directionType::fwd, Controller1.Axis3.value(), vex::velocityUnits::pct);
    }
    else if(Controller1.Axis1.value()>0){
      FRightMotor.spin(vex::directionType::rev,Controller1.Axis1.value(), vex::velocityUnits::pct);
     // BRightMotor.spin(vex::directionType::rev,Controller1.Axis1.value(), vex::velocityUnits::pct);
      FLeftMotor.spin(vex::directionType::fwd,Controller1.Axis1.value(), vex::velocityUnits::pct);
     // BLeftMotor.spin(vex::directionType::fwd,Controller1.Axis1.value(), vex::velocityUnits::pct);
    }
    else if(Controller1.Axis1.value()<0){
      FRightMotor.spin(vex::directionType::rev,Controller1.Axis1.value(), vex::velocityUnits::pct);
     // BRightMotor.spin(vex::directionType::rev,Controller1.Axis1.value(), vex::velocityUnits::pct);
      FLeftMotor.spin(vex::directionType::fwd,Controller1.Axis1.value(), vex::velocityUnits::pct);
      // BLeftMotor.spin(vex::directionType::fwd,Controller1.Axis1.value(), vex::velocityUnits::pct);
    }
    else
    {
   // BRightMotor.stop();
   // BLeftMotor.stop();
    FRightMotor.stop();
    FLeftMotor.stop();
    }
}
  