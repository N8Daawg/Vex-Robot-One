/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       robot-config.h                                            */
/*    Author:       Nathan Beals                                              */
/*    Created:      Sun Feb. 18 2024                                          */
/*    Description:  declerations of robot motors and devices                  */
/*                                                                            */
/*----------------------------------------------------------------------------*/
using namespace vex;

extern brain Brain;
extern controller Controller;

//extern driveTrain drive;
extern sensorUnit driveSensors;

// VEXcode devices
extern aivision aivis;

extern Robot robot;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void);
