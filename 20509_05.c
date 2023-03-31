
task main()
{
	while(1){
		setLEDColor(ledGreen);
		wait1Msec(5000);

		playSoundFile("Backing alert");

		setLEDColor(ledOrangeFlash);
		wait1Msec(1500);

		setLEDColor(ledRed);
		wait1Msec(12000);
	}
}
