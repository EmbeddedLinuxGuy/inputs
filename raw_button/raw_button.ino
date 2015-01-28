const int button_pin = 2;
const int serial_speed = 9600;

void setup () {
	Serial.begin(serial_speed);
	pinMode(button_pin, INPUT_PULLUP);
}

void loop () {
	Serial.println(digitalRead(button_pin));
}

