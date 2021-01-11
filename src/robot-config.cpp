#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;
controller Controller;
motor DriveLeft1 = motor(PORT1);
motor DriveLeft2 = motor(PORT2);
motor DriveRight1 = motor(PORT3, true);
motor DriveRight2 = motor(PORT4, true);
motor Amech1 = motor(PORT5);
motor Amech2 = motor(PORT6);
motor Bmech1 = motor(PORT7);
/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // Nothing to initialize
}