// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "PneumaticShooter.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

PneumaticShooter::PneumaticShooter() : Subsystem("PneumaticShooter") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    leftShooter = RobotMap::pneumaticShooterLeftShooter;
    middleShooter = RobotMap::pneumaticShooterMiddleShooter;
    rightShooter = RobotMap::pneumaticShooterRightShooter;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void PneumaticShooter::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void PneumaticShooter::Shoot(int position) {
	if (position==0) {
		// shoot left
		leftShooter->Set(true);
		printf("Shooting Left Cannon\n");
	} else if (position==1) {
		// shoot middle
		middleShooter->Set(true);
		printf("Shooting Middle Cannon\n");
	} else if (position==2) {
		// shoot right
		rightShooter->Set(true);
		printf("Shooting Right Cannon\n");
	} else if (position==3) {
		// reset
		leftShooter->Set(false);
		middleShooter->Set(false);
		rightShooter->Set(false);
		printf("Resetting Cannons\n");
	} else {
		printf("Invalid Value: %i\n",position);
	}

/*	switch (position) {
	case 0:
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		leftShooter->Set(false);
		middleShooter->Set(false);
		rightShooter->Set(false);
		break;
	default:
		printf("Invalid Value: %i\n",position);
		break;
	}
*/
}
