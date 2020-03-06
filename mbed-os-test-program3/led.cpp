#include "mbed.h"

void Led(DigitalOut& ledpin,bool mode)
{
    if(mode == 1){
        for(int i=0;i<6;i++){
            ledpin = !ledpin;
            wait(0.2f);
        }
    }
    else{
        for(int i=0;i<4;i++){
            ledpin = !ledpin;
            wait(0.2f);
        }
    }
}