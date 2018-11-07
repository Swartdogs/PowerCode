/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "AutoCommands.h"

AutoFun::AutoFun() {
  AddSequential	(new CmdDrivePID(240, 0, 1.0, Drive::encoderAverage, true, true , 5, false));	    	// Drive to Scale
  AddSequential	(new CmdRotatePID(50, 0.6, false, 3, false));							                    			// Rotate toward Scale
  AddSequential	(new CmdDrivePID(240, 0, 1.0, Drive::encoderAverage, true, true , 5, false));	    	// Drive to Scale
  AddSequential	(new CmdRotatePID(50, 0.6, false, 3, false));							                    			// Rotate toward Scale
  AddSequential	(new CmdDrivePID(240, 0, 1.0, Drive::encoderAverage, true, true , 5, false));	    	// Drive to Scale
  AddSequential	(new CmdRotatePID(50, 0.6, false, 3, false));							                    			// Rotate toward Scale
  AddSequential	(new CmdDrivePID(240, 0, 1.0, Drive::encoderAverage, true, true , 5, false));	    	// Drive to Scale
  AddSequential	(new CmdRotatePID(50, 0.6, false, 3, false));							                    			// Rotate toward Scale
  AddSequential	(new CmdDrivePID(240, 0, 1.0, Drive::encoderAverage, true, true , 5, false));	    	// Drive to Scale
}
