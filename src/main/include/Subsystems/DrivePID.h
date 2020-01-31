// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#pragma once

#include "frc/commands/PIDSubsystem.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "ctre/Phoenix.h"
#include "frc/Encoder.h"
#include "frc/SpeedControllerGroup.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 *
 *
 * @author ExampleAuthor
 */
class DrivePID: public frc::PIDSubsystem {

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<ctre::phoenix::motorcontrol::can::WPI_TalonSRX> left1;
	std::shared_ptr<ctre::phoenix::motorcontrol::can::WPI_TalonSRX> left2;
	std::shared_ptr<frc::SpeedControllerGroup> leftSide;
	std::shared_ptr<ctre::phoenix::motorcontrol::can::WPI_TalonSRX> right1;
	std::shared_ptr<ctre::phoenix::motorcontrol::can::WPI_TalonSRX> right2;
	std::shared_ptr<frc::SpeedControllerGroup> rightSide;
	std::shared_ptr<frc::Encoder> driveEncoder;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
 public:
DrivePID();
	double ReturnPIDInput() override;
	void UsePIDOutput(double output) override;
	void InitDefaultCommand() override;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS
};

