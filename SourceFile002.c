#pragma config(Sensor, S1,     T,              sensorEV3_Touch)
#pragma config(Sensor, S3,     C,              sensorEV3_Color, modeEV3Color_Color)
#pragma config(Motor,  motorA,          M,             tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorD,          L,             tmotorEV3_Large, PIDControl, encoder)

void brick_int(){
	setMotorSpeed(motorA, 5);
	wait1Msec(2500);

	moveMotorTarget(motorA, 180, -30);
	waitUntilMotorStop(motorA);
	wait1Msec(1000);
}

void brick_release(){
	moveMotorTarget(motorA, 90, 100);
	waitUntilMotorStop(motorA);
	wait1Msec(500);
	moveMotorTarget(motorA, 90, -100);
	waitUntilMotorStop(motorA);
	wait1Msec(500);
}

void move_orgin(){
	setMotorSpeed(motorD, -30);
	while(SensorValue[S1]==0){}
	setMotorSpeed(motorD, 0);
	resetMotorEncoder(motorD);
}

task main(){
	brick_int();
	while(1){
		move_orgin();

		setSensorMode(C, 2);

		switch(SensorValue[S3]){
		case 2:
			playSoundFile("Blue");
			displayCenteredBigTextLine(7, "Blue");
			setMotorTarget(motorD, 10, 50);
			waitUntilMotorStop(motorD);
			brick_release();
			break;
		case 3:
			playSoundFile("Green");
			displayCenteredBigTextLine(7, "Green");
			setMotorTarget(motorD, 160, 50);
			waitUntilMotorStop(motorD);
			brick_release();
			break;
		case 4:
			playSoundFile("Yellow");
			displayCenteredBigTextLine(7, "Yellow");
			setMotorTarget(motorD, 360, 50);
			waitUntilMotorStop(motorD);
			brick_release();
			break;
		case 5:
			playSoundFile("Red");
			displayCenteredBigTextLine(7, "Red");
			setMotorTarget(motorD, 560, 50);
			waitUntilMotorStop(motorD);
			brick_release();
			break;
		default:
			displayCenteredBigTextLine(7, " ");
		}
	}
}
