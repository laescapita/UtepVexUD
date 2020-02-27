using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor FLeftMotor;
extern motor FRightMotor;
extern motor BLeftMotor;
extern motor BRightMotor;
extern motor LeftLiftMotor;
extern motor RightLiftMotor;
extern motor ClawLeftMotor;
extern motor ClawRightMotor;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );