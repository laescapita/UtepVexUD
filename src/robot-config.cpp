#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor FLeftMotor = motor(PORT1, ratio18_1, false);
motor FRightMotor = motor(PORT3, ratio18_1, true);
motor LeftLiftMotor = motor(PORT9,ratio18_1,false);
motor RightLiftMotor = motor(PORT10,ratio18_1,true);
motor ClawLeftMotor = motor(PORT7,ratio18_1,false);
motor ClawRightMotor = motor(PORT8,ratio18_1,true);
inertial Balance = inertial(PORT3);

controller Controller1 = controller(primary);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}