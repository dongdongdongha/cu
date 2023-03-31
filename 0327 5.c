#pragma config(Sensor, S1,     t,              sensorEV3_Touch)

task main()
{while(1){
	displayCenteredBigTextLine(3, "Touch Sensor: %d", SensorValue[S1]);
}
}
