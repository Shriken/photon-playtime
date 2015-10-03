int TRANSISTOR_PIN = D7;

void setup() {
	pinMode(TRANSISTOR_PIN, OUTPUT);
}

void loop() {
	digitalWrite(TRANSISTOR_PIN, LOW);
	delay(1000);
	digitalWrite(TRANSISTOR_PIN, HIGH);
	delay(1000);
	digitalWrite(TRANSISTOR_PIN, LOW);
	delay(1000);
}
