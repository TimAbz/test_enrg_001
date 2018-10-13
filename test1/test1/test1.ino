/*
 Name:		test1.ino
 Created:	13.10.2018 23:00:21
 Author:	abzik
*/
int led = 2;
int i;

void setup() {
	pinMode(led, OUTPUT);
	Serial.begin(9600);
}

void loop() {
	i = int Serial.read();
	digital.write(led, i);
}
