/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "AutoCommands.h"

AutoRoxanna::AutoRoxanna() {

AddSequential (new CmdDrivePID(20, 0, 0.5, Drive::encoderAverage, true, true, 5, false));
AddSequential (new CmdRotatePID(-90, 0.5, false, 3, false));
}
