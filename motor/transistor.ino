int BASE_PIN = D6;
int COLLECTOR_PIN = D7;

void setup() {
	pinMode(BASE_PIN, OUTPUT);
	pinMode(COLLECTOR_PIN, OUTPUT);
}

void loop() {
	Serial.println("high collector");
	digitalWrite(COLLECTOR_PIN, HIGH);

	delay(4000);
	Serial.println("high base");
	digitalWrite(BASE_PIN, HIGH);
}
