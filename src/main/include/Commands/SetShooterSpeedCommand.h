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



#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

/**
 * An example command.
 *
 * <p>Note that this extends CommandHelper, rather extending CommandBase
 * directly; this is crucially important, or else the decorator functions in
 * Command will *not* work!
 */
class SetShooterSpeedCommand
    : public frc2::CommandHelper<frc2::CommandBase, SetShooterSpeedCommand> {
 private:
    double m_shooterSpeed;
    
 public:
  SetShooterSpeedCommand(double rpm);

   void Execute() override;

  //If this function is not included in the class, it will do nothing
  void Initialize() override;

  //If this function is not included in the class, it will return FALSE and run forever
  bool IsFinished() override;

  void End(bool interrupted) override;

};

