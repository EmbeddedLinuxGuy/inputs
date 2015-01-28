int serial_speed = 9600;
int noise_floor = 0;

void setup () {
	Serial.begin(serial_speed);
}

void loop () {
	int value = analogRead(A0);
	if (value > noise_floor) {
		Serial.println(value);
	}
}

