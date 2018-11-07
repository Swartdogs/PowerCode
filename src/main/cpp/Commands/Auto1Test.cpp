/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "AutoCommands.h"

Auto1Test::Auto1Test() {
  AddSequential	(new CmdDrivePID(40, 0, .5, Drive::encoderAverage, true, true , 5, false));
  AddSequential	(new CmdRotatePID(90, 0.5, true, 3, false));	
  AddSequential	(new CmdDrivePID(40, 0, .5, Drive::encoderAverage, true, true , 5, false));
  AddSequential	(new CmdRotatePID(90, 0.5, true, 3, false));
  AddSequential	(new CmdDrivePID(40, 0, .5, Drive::encoderAverage, true, true , 5, false));
  AddSequential	(new CmdRotatePID(90, 0.5, true, 3, false));
  AddSequential	(new CmdDrivePID(40, 0, .5, Drive::encoderAverage, true, true , 5, false));
}
