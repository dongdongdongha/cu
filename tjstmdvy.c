#pragma config(Sensor, S1,     T,              sensorEV3_Touch)
#pragma config(Sensor, S3,     C,              sensorEV3_Color, modeEV3Color_Color)
#pragma config(Motor,  motorA,          M,             tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorD,          L,             tmotorEV3_Large, PIDControl, encoder)

task main(){
	while(1){
		moveMotorTarget(motorA, 90, -100);
		waitUntilMotorStop(motorA);
		wait1Msec(500);
		moveMotorTarget(motorA, 90, 100);
		waitUntilMotorStop(motorA);
		wait1Msec(500);
	}
}
