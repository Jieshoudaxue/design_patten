#include <stdio.h>
#include <unistd.h>

typedef void (*tOpenLed)(void);
typedef void (*tCloseLed)(void);
typedef void (*tDelayLed)(int delay);

typedef struct Led {
    int delay;
    
    tOpenLed openLed;
    tCloseLed closeLed;
    tDelayLed delayLed;    
} tLed;

void ledOn(void) {
    printf("led on\n");
}

void ledOff(void) {
    printf("led off\n");
}

void delay(int delay) {
    sleep(delay);
}

int main(void) {
    tLed led1, led2, led3;
    
    led1.openLed = ledOn;
    led1.closeLed = ledOff;
    led1.delayLed = delay;

    led2.openLed = ledOn;
    led2.closeLed = ledOff;
    led2.delayLed = delay;

    led3.openLed = ledOn;
    led3.closeLed = ledOff;
    led3.delayLed = delay;

    while (1) {
        led1.openLed();
        led2.closeLed();
        led3.closeLed();
        led1.delayLed(1);
        printf("-------------\n");
        
        led1.closeLed();
        led2.openLed();
        led3.closeLed();
        led1.delayLed(1);
        printf("-------------\n");
        
        led1.closeLed();
        led2.closeLed();
        led3.openLed();
        led1.delayLed(1);        
        printf("-------------\n");
    }
    
    
    return 0;
}





















