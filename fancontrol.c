#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
        long temp;
        if(argc < 2){
		wiringPiSetup () ;
                pinMode (7, OUTPUT) ;
                for (;;)
                {
                        digitalWrite (7, HIGH) ; delay (10) ;
                        digitalWrite (7,  LOW) ; delay (40) ;
                }
	}

        temp = strtol(argv[1], NULL, 10);

        if(temp <= 32){
                wiringPiSetup () ;
                pinMode (7, OUTPUT) ;
                for (;;)
                {
                        digitalWrite (7, HIGH) ; delay (10) ;
                        digitalWrite (7,  LOW) ; delay (40) ;
                }
        } else if (temp <= 45 && temp > 32) {
                wiringPiSetup () ;
                pinMode (7, OUTPUT) ;
                for (;;)
                {
                        digitalWrite (7, HIGH) ; delay (10) ;
                        digitalWrite (7,  LOW) ; delay (10) ;
                }
        } else if (temp > 45 && temp < 60) {
                wiringPiSetup () ;
                pinMode (7, OUTPUT) ;
                for (;;)
                {
                        digitalWrite (7, HIGH) ; delay (40) ;
                        digitalWrite (7,  LOW) ; delay (10) ;
                }
        } else {
		wiringPiSetup () ;
                pinMode (7, OUTPUT) ;
                for (;;)
                {
                        digitalWrite (7, HIGH) ; delay (1000) ;
                }
	}


        return 0 ;
}
