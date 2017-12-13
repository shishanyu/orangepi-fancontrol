#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
//#include <unistd.h>
//Beat duration in miliseconds
int delays = 10;
//Leave like that
int c_ = 1;
//How many delays you run a "reset"
int c_refresh = 5;
//Pin number
int pin = 7;

long getTemperature (char file[128]) {
	if(!file){
		puts("No file");
		return 0;
	}
	FILE * fp;
	long temperature;
	char str[3];
	fp = fopen(file, "r");
	if(fp == NULL) {
		puts("Cant open file");
		return(0);
	}
	if(fgets (str, 60, fp)!=NULL ) {
		temperature = strtol(str, NULL, 10);
		return temperature;
	} else {
		puts("No content");
		return 0;
	}
}

int getSetting (long t){
	// 1 = lowest
	// 2 = low
	// 3 = mid
	// 4 = high
	// 5 = highest
	if(!t){ return 1;}
	else if(t < 32){ return 1;}
	else if(t > 31 && t < 40){ return 2; }
	else if(t > 39 && t < 50){ return 3; }
	else if(t > 49 && t < 60){ return 4; }
	else { return 5; }
	return 5;
}

int main (int argc, char* argv[])
{
	//wiringPiSetup ();
	//pinMode (7, OUTPUT);
	long temp;
	int c_on; //How many "on" beats should be per count
	int c_on_c = 1; //Current "on" beat count
	int c_on_total = 5; //Total number of beats
	temp = getTemperature (argv[1]);
	c_on = getSetting (temp);
	while (c_)
	{
		if(c_on_c <= c_on){
			//Prender
			//puts("Prendido");
			digitalWrite (pin, HIGH);
		} else {
			//Apagar
			//puts("Apagado");
			digitalWrite (pin, LOW);
		}
		c_on_c++;
		if(c_on_c > c_on_total){ c_on_c = 1;}
		//printf("Es: %d, %ld\n",getSetting(temp), temp); // debug stuff
		//Change sleep function to delay and viceversa for secs or milisecs
		//sleep(delays);
		delay(delays);
		c_++;
		if(c_ > c_refresh){
			c_=1;
			temp = getTemperature (argv[1]);
			c_on = getSetting (temp);
		}
	}
	return 0;
}