/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#include "vex.h"
#include "userFunctions.h"
#include "autoFunctions.h"
using namespace vex;

// A global instance of competition
vex::competition Competition;

// define your global instances of motors and other devices here

void pre_auton(void) {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

}


void auton(void) //Change the color of Autonomous 
{
  Brain.Screen.newLine();
  redAuto();
}


void userControl( void )
{
  Brain.Screen.newLine();
  Brain.Screen.print("Mecanum Drive - Javi is always watching");

  //setDriveSpeed();

  //Positions
  //Infinite Loop
  while(1)
  {
      int Ax2Pos = Controller1.Axis2.position();
      int Ax3Pos = Controller1.Axis3.position();
     

      joyStickDrive(Ax2Pos,  Ax3Pos);

      if(Controller1.ButtonB.pressing())
      {
        redAuto();
      }
      
  }

 vex::task::sleep(20);

}

//
// Main will set up the competition functions and callbacks.
//

int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous( auton );
  Competition.drivercontrol( userControl );

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
