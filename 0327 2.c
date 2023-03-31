#pragma config(Motor,  motorA,          m,             tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorB,          l,             tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          r,             tmotorEV3_Large, PIDControl, encoder)

task main()
{
	moveMotorTarget(motorB, 360, 50);
	wait1Msec(1000);
	moveMotorTarget(motorB, 360, 50);
	wait1Msec(1000);
}
