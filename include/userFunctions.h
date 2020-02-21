#include "vex.h"
#include "robot-config.h"

void joyStickDrive(int Ax1Pos,int Ax3Pos)
{ 
     //left motors
    FLeftMotor.spin(vex::directionType::fwd,Controller1.Axis3.value(), vex::velocityUnits::pct);
   //right motors
    FRightMotor.spin(vex::directionType::fwd,Controller1.Axis2.value(), vex::velocityUnits::pct);

}

void clawOpen(int Button)
{ 
    ClawLeftMotor.spin(vex::directionType::fwd,Controller1.Axis1.value(), vex::velocityUnits::pct);
    ClawRightMotor.spin(vex::directionType::fwd,Controller1.Axis1.value(), vex::velocityUnits::pct);
} 

void clawClose(int Button)
{ 
    ClawLeftMotor.spin(vex::directionType::rev,Controller1.Axis4.value(), vex::velocityUnits::pct);
    ClawRightMotor.spin(vex::directionType::rev,Controller1.Axis4.value(), vex::velocityUnits::pct);
}

void liftUp(int Button)
{ 
    LeftLiftMotor.spin(vex::directionType::fwd,Controller1.Axis1.value(), vex::velocityUnits::pct);
    RightLiftMotor.spin(vex::directionType::fwd,Controller1.Axis1.value(), vex::velocityUnits::pct);
} 

void liftDown(int Button)
{ 
    ClawLeftMotor.spin(vex::directionType::rev,Controller1.Axis1.value(), vex::velocityUnits::pct);
    ClawRightMotor.spin(vex::directionType::rev,Controller1.Axis1.value(), vex::velocityUnits::pct);
} 