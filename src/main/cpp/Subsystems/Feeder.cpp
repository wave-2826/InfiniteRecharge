// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Subsystems/Feeder.h"
#include "Reference.h"
using namespace rev;

Feeder::Feeder() {

    hopperLeft = new CANSparkMax(HOPPER_LEFT, CANSparkMaxLowLevel::MotorType::kBrushless);
    hopperRight = new CANSparkMax(HOPPER_RIGHT, CANSparkMaxLowLevel::MotorType::kBrushless);
    intake = new CANSparkMax(INTAKE, CANSparkMaxLowLevel::MotorType::kBrushless);



    pDBoard = new frc::PowerDistributionPanel(0);
    //AddChild("PDBoard", pDBoard);

    photoEye = new frc::DigitalInput(6);
    //AddChild("PhotoEye", photoEye);

}



// Put methods for controlling this subsystem
// here. Call these from Commands.

