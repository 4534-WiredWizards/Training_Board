#ifndef STICKOFJOY_H
#define STICKOFJOY_H

#include "Commands/Subsystem.h"

#include "../../../../git/Training_Board/src/Robot.h"


class StickOfJoy : public Command {
public:
	StickOfJoy();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // StickOfJoy_H
