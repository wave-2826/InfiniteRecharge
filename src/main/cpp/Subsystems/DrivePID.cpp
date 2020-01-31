// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "Subsystems/DrivePID.h"
#include "frc/SmartDashboard/SmartDashboard.h"
#include "frc/LiveWindow/LiveWindow.h"
#include "Reference.h"

DrivePID::DrivePID() : PIDSubsystem("DrivePID", 1.0, 0.0, 0.0) {
    SetAbsoluteTolerance(0.2);
    GetPIDController()->SetContinuous(false);
    //GetPIDController()->SetName("DrivePID", "PIDSubsystem Controller");
    //AddChild(GetPIDController());

    left1.reset(new WPI_TalonSRX(DRIVE_LEFT_1));
    left2.reset(new WPI_TalonSRX(DRIVE_LEFT_2));
    leftSide = std::make_shared<frc::SpeedControllerGroup>(*left1, *left2  );
    // AddChild("LeftSide", leftSide);

    right1.reset(new WPI_TalonSRX(DRIVE_RIGHT_1));
    right2.reset(new WPI_TalonSRX(DRIVE_RIGHT_2));
    rightSide = std::make_shared<frc::SpeedControllerGroup>(*right1, *right2  );
    // AddChild("RightSide", rightSide);

    driveEncoder.reset(new frc::Encoder(4, 5, false, frc::Encoder::k4X));
    // AddChild("DriveEncoder", driveEncoder);
    driveEncoder->SetDistancePerPulse(1.0);
    driveEncoder->SetPIDSourceType(frc::PIDSourceType::kRate);

        // Use these to get going:
        // SetSetpoint() -  Sets where the PID controller should move the system
        //                  to
        // Enable() - Enables the PID controller.
}

double DrivePID::ReturnPIDInput() {
    // Return your input value for the PID loop
    // e.g. a sensor, like a potentiometer:
    // yourPot->SetAverageVoltage() / kYourMaxVoltage;

    return driveEncoder->PIDGet();

}

void DrivePID::UsePIDOutput(double output) {
    // Use output to drive your system, like a motor
    // e.g. yourMotor->Set(output);

leftSide->PIDWrite(output);

}

void DrivePID::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());

}



