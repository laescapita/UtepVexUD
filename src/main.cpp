/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// FLeftMotor           motor         1               
// BLeftMotor           motor         2               
// FRightMotor          motor         3               
// BRightMotor          motor         4               
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "userFunctions.h"
using namespace vex;

// A global instance of competition
vex::competition Competition;

// define your global instances of motors and other devices here

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonBlue(void) {

  Brain.Screen.print("Autonmous is-a-go");

  //Sets Speed of every motor 
  FLeftMotor.setVelocity(100, vex::velocityUnits::pct);
 // BLeftMotor.setVelocity(100, vex::velocityUnits::pct);
  FRightMotor.setVelocity(100, vex::velocityUnits::pct);
 // BRightMotor.setVelocity(100, vex::velocityUnits::pct);

  //Move Forward
  FLeftMotor.spin(forward);
 // BLeftMotor.spin(forward);
  FRightMotor.spin(forward);
 // BRightMotor.spin(forward);

  Brain.Screen.newLine();
  Brain.Screen.print("Autonmous has ended");
}

void autonRed(void) {
  
  Brain.Screen.print("Autonmous is-a-go");

  //Sets Speed of every motor 
  FLeftMotor.setVelocity(100, vex::velocityUnits::pct);
 // BLeftMotor.setVelocity(100, vex::velocityUnits::pct);
  FRightMotor.setVelocity(100, vex::velocityUnits::pct);
 // BRightMotor.setVelocity(100, vex::velocityUnits::pct);

  //Move Forward
  FLeftMotor.spin(forward);
 // BLeftMotor.spin(forward);
  FRightMotor.spin(forward);
 // BRightMotor.spin(forward);

  Brain.Screen.newLine();
  Brain.Screen.print("Autonmous has ended");
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void userControl( void )
{
  Brain.Screen.newLine();
  Brain.Screen.print("Mecanum Drive - Javi is always watching");

  //setDriveSpeed();

  //Positions
  //Infinite Loop
  while(1)
  {
      int Ax1Pos = Controller1.Axis1.position();
      int Ax3Pos = Controller1.Axis3.position();
      int Ax4Pos = Controller1.Axis4.position();

  }

 vex::task::sleep(20);

}

//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonBlue);
  Competition.drivercontrol(userControl);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
