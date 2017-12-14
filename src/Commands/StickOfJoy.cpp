#include "StickOfJoy.h"

StickOfJoy::StickOfJoy() {
	Requires(Robot::driveMotor.get());
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void StickOfJoy::Initialize() {


}

// Called repeatedly when this Command is scheduled to run
void StickOfJoy::Execute() {
	Robot::driveMotor->SetLeftMotor(Robot::oi->getJoystick1()->GetY());
	Robot::driveMotor->SetRightMotor(Robot::oi->getJoystick1()->GetY());
}

// Make this return true when this Command no longer needs to run execute()
bool StickOfJoy::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void StickOfJoy::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StickOfJoy::Interrupted() {
	Robot::driveMotor->StopLeftMotor();
	Robot::driveMotor->StopRightMotor();
}
