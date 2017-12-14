#ifndef StickOfJoy_H
#define StickOfJoy_H

#include "../CommandBase.h"

class StickOfJoy : public CommandBase {
public:
	StickOfJoy();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // StickOfJoy_H
