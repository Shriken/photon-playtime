void setup() {
	Serial.begin(300);
	Serial.println("awakening");
}

void loop() {
	int someNumber = random(10000);

	// We have to print to Serial1
	Serial.println(someNumber);

	// Delay 500 milliseconds so it's not too fast
	delay(500);
}
