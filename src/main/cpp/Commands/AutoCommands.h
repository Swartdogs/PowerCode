
#ifndef SRC_COMMANDS_AUTOCOMMANDS_H_
#define SRC_COMMANDS_AUTOCOMMANDS_H_

#include <Commands/CommandGroup.h>
#include "../Dashboard.h"
#include "CmdAutoArmTilt.h"
#include "CmdCubeIntakeMode.h"
#include "CmdCubeIntakePosition.h"
#include "CmdCubeIntakeWait.h"
#include "CmdDriveArc.h"
#include "CmdDrivePID.h"
#include "CmdDriveShift.h"
#include "CmdDriveTurn.h"
#include "CmdLiftBump.h"
#include "CmdLiftPosition.h"
#include "CmdLiftWait.h"
#include "CmdRotatePID.h"

class AutoFun : public frc::CommandGroup {
 public:
  AutoFun();
};

class AutoDrive : public CommandGroup {
public:
	AutoDrive(double wait);
};

class Auto1Test : public frc::CommandGroup {
 public:
  Auto1Test();
};

class Auto1DriveForward : public CommandGroup {
public:
	Auto1DriveForward(double wait);
};

class Auto1ScaleLeft : public CommandGroup {
public:
	Auto1ScaleLeft(double wait);
};

class Auto1ScaleRight : public CommandGroup {
public:
	Auto1ScaleRight(double wait);
};

class Auto1ScaleSwitchLeft: public CommandGroup{
public:
	Auto1ScaleSwitchLeft(double wait);
};

class Auto1ScaleX2Left: public CommandGroup{
public:
	Auto1ScaleX2Left(double wait);
};

class Auto1ScaleX2Right: public CommandGroup{
public:
	Auto1ScaleX2Right(double wait);
};

class Auto1SwitchLeft : public CommandGroup {
public:
	Auto1SwitchLeft(double wait);
};

class Auto2SwitchExchLeft : public frc::CommandGroup {
public:
	Auto2SwitchExchLeft(double wait);
};

class Auto2SwitchExchRight : public frc::CommandGroup {
public:
	Auto2SwitchExchRight(double wait);
};

class Auto2SwitchLeft : public CommandGroup {
public:
	Auto2SwitchLeft(double wait);
};

class Auto2SwitchRight : public CommandGroup {
public:
	Auto2SwitchRight(double wait);
};

class Auto2SwitchX2Left : public frc::CommandGroup {
public:
	Auto2SwitchX2Left(double wait);
};

class Auto2SwitchX2Right : public frc::CommandGroup {
public:
	Auto2SwitchX2Right(double wait);
};

class Auto3DriveForward : public CommandGroup {
public:
	Auto3DriveForward(double wait);
};

class Auto3ScaleLeft : public CommandGroup {
public:
	Auto3ScaleLeft(double wait);
};

class Auto3ScaleRight : public CommandGroup {
public:
	Auto3ScaleRight(double wait);
};

class Auto3ScaleSwitchRight : public CommandGroup {
public:
	Auto3ScaleSwitchRight(double wait);
};

class Auto3ScaleX2Left : public CommandGroup {
public:
	Auto3ScaleX2Left(double wait);
};

class Auto3ScaleX2Right : public CommandGroup {
public:
	Auto3ScaleX2Right(double wait);
};

class Auto3SwitchRight : public CommandGroup {
public:
	Auto3SwitchRight(double wait);
};

#endif /* SRC_COMMANDS_AUTOCOMMANDS_H_ */
