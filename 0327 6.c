#pragma config(Sensor, S1,     t,              sensorEV3_Touch)
task main()
{
	setMotorSpeed(motorB, 30);
	setMotorSpeed(motorC, 30);

	while(SensorValue[S1] == 0){};

	setMotorSpeed(motorB, 0);
	setMotorSpeed(motorC, 0);
}
