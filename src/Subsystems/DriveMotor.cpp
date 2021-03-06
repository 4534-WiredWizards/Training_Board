// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "../../../../git/Training_Board/src/Subsystems/DriveMotor.h"

#include "../../../../git/Training_Board/src/RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

DriveMotor::DriveMotor() : Subsystem("DriveMotor") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    leftMotor = RobotMap::driveMotorSpeedController1;
    rightMotor = RobotMap::driveMotorSpeedController2;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void DriveMotor::InitDefaultCommand() {
	SetDefaultCommand(new StickOfJoy());
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void DriveMotor::SetLeftMotor(double rate){
    DriveMotor::leftMotor->Set(rate);
}
void DriveMotor::SetRightMotor(double rate){
    DriveMotor::rightMotor->Set(rate);
}

void DriveMotor::StopLeftMotor(){
	DriveMotor::leftMotor->StopMotor();
}

void DriveMotor::StopRightMotor(){
	DriveMotor::rightMotor->StopMotor();
}
