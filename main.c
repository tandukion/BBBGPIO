#include <gpio.h>

int main() {
	init();
	while(1) {
		digitalWrite(USR3, HIGH);
		usleep(50000);
		digitalWrite(USR2, HIGH);
		usleep(50000);
		digitalWrite(USR1, HIGH);
		usleep(50000);
		digitalWrite(USR0, HIGH);
		usleep(50000);
		digitalWrite(USR3, LOW);
		usleep(50000);
		digitalWrite(USR2, LOW);
		usleep(50000);
		digitalWrite(USR1, LOW);
		usleep(50000);
		digitalWrite(USR0, LOW);
		usleep(50000);

/*
	  	// set P8_3 as an INPUT with PULLDOWN enabled
	  	pinMode(P8_3, INPUT, 7, PULLDOWN);
		// turn on USR2 LED when P8_3 is set high
		digitalWrite(USR2, digitalRead(P8_3));
*/
	}	
	return 0;
}
