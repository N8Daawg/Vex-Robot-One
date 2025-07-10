#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "v5.h"
#include "v5_vcs.h"

// API submodule drivetrain classes
#include "../VU-API/include/drivetrainSubsystems/sensorUnit.hpp"
#include "../VU-API/include/drivetrainSubsystems/wheelSide.hpp"
#include "../VU-API/include/drivetrainSubsystems/twoWheelSide.hpp"
#include "../VU-API/include/drivetrainSubsystems/threeWheelSide.hpp"
#include "../VU-API/include/drivetrainSubsystems/fourWheelSide.hpp"
#include "../VU-API/include/drivetrainSubsystems/drivetrain.hpp"

// API submodule MISC classes
#include "../VU-API/include/robotSubsystems/clamp.hpp"
#include "../VU-API/include/robotSubsystems/intake.hpp"
#include "../VU-API/include/robotSubsystems/conveyor.hpp"
#include "../VU-API/include/robotSubsystems/arm.hpp"

// API submodule Robot Controller class
#include "../VU-API/include/robotSubsystems/robot.hpp"

// Robot & auton Config
#include "robot-config.h"
#include "autons.h"

#define waitUntil(condition)                                                   \
  do {                                                                         \
    wait(5, msec);                                                             \
  } while (!(condition))

#define repeat(iterations)                                                     \
  for (int iterator = 0; iterator < iterations; iterator++)