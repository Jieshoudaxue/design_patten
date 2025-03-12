#include <iostream>
#include <unistd.h>

using namespace std;

class Led {
public:
    int index;
    
    void on(void);
    void off(void);
};

void Led::on(void) {
    cout << "led" << this->index << " on" << endl;
}

void Led::off(void) {
    cout << "led" << this->index << " off" << endl;
}



int main(void) {
    class Led led1, led2, led3;
    led1.index = 1;
    led2.index = 2;
    led3.index = 3;
    
	while (1)
	{
		// 第1阶段
		led1.on();
		led2.off();
		led3.off();
		sleep(1);
		
		// 第2阶段
		led1.off();
		led2.on();
		led3.off();
		sleep(1);
		
		// 第3阶段
		led1.off();
		led2.off();
		led3.on();
		sleep(1);
	}    
    return 0;
}
