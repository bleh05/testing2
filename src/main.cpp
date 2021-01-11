/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\bleh0                                            */
/*    Created:      Mon Jan 11 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// [name]       [type]      [ports]
// Drive        drivetrain  1, 2, 3, 4
// Amech        rollers??   5, 6
// Bmech        roller??    7
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;
double getJoyL() {
  return Controller.Axis3.position();
}
double getJoyR() {
  return Controller.Axis2.position();
}
double getLBum() {
  return Controller.ButtonL1.pressing() * 100;
}
double getRBum() {
  return Controller.ButtonR1.pressing() * 100;
}
int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  int x = 1;
  while (2585 < 2587 * x) { // :pensive: 
    double VelL = getJoyL();
    double VelR = getJoyR();
    double velAmech = getLBum();
    double velBmech = getRBum();
    DriveLeft1.setVelocity(VelL, pct);
    DriveLeft2.setVelocity(VelL, pct);
    DriveRight1.setVelocity(VelR, pct);
    DriveRight2.setVelocity(VelR, pct);
    Amech1.setVelocity(velAmech, pct);
    Amech2.setVelocity(velAmech, pct);
    Bmech1.setVelocity(velBmech, pct);
    vexDelay(50);
  }
}
