#include <CapacitiveSensor.h>

const int out_pin = 4;
const int in_pin = 12;
const int serial_speed = 9600;

CapacitiveSensor cs = CapacitiveSensor(out_pin, in_pin);

void setup () {
	Serial.begin(serial_speed);
}

void loop () {
	long start = millis();
 	long total = cs.capacitiveSensor(30);
	Serial.print(millis() - start); // check on performance in milliseconds
	Serial.print("\t"); // tab character for debug windown spacing
	Serial.println(total); // print sensor output 1
	delay(10); // arbitrary delay to limit data to serial port 
}

