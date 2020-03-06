#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

void Led(DigitalOut& ledpin,bool mode);

int main()
{
    redLED = 1;
    greenLED = 1;
    while(true){
        Led(redLED,1);
        Led(greenLED,0);
    }
}