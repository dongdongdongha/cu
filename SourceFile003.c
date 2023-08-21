#pragma config(Sensor, S1,     T,              sensorEV3_Touch)
#pragma config(Sensor, S3,     C,              sensorEV3_Color, modeEV3Color_Color)
#pragma config(Motor,  motorA,          A,             tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorD,          D,             tmotorEV3_Large, PIDControl, encoder)
task main(){
	while(1){
		setSensorMode(C,2);
		switch(SensorValue[C]){
			case 2:
			playSoundFile("Blue");
			displayCenteredBigTextLine(7, "Blue");
			break;

			case 3:
			playSoundFile("Green");
			displayCenteredBigTextLine(7, "Green");
			break;

			case 4:
			playSoundFile("Yellow");
			displayCenteredBigTextLine(7, "Yellow");
			break;

			case 5:
			playSoundFile("Red");
			displayCenteredBigTextLine(7, "Red");
			break;
		}
		wait1Msec(500);
	}
}
