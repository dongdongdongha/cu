#pragma config(Sensor, S1,     T,              sensorEV3_Touch)
#pragma config(Sensor, S3,     C,              sensorEV3_Color, modeEV3Color_Color)
#pragma config(Motor,  motorA,          M,             tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorD,          L,             tmotorEV3_Large, PIDControl, encoder)

task main(){
	int color, loop_cnt = 0;

	while(1){
		setMotorSpeed(motorD, -30);

		while(SensorValue[S1] == 0){}

		setMotorSpeed(motorD, 0);
		wait1Msec(1000);

		resetMotorEncoder(motorD);

		color = loop_cnt % 4;

		switch(color){
		case 0:
			setMotorTarget(motorD, 10, 50);
			waitUntilMotorStop(motorD);
			break;
		case 1:
			setMotorTarget(motorD, 160, 50);
			waitUntilMotorStop(motorD);
			break;
		case 2:
			setMotorTarget(motorD, 360, 50);
			waitUntilMotorStop(motorD);
			break;
		case 3:
			setMotorTarget(motorD, 560, 50);
			waitUntilMotorStop(motorD);
			break;
		}
		loop_cnt++;
		wait1Msec(2000);


	}




}
