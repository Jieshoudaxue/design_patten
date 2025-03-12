#ifndef _MAN_H_
#define _MAN_H_

#include "person.h"

class Man: public Person {
public:

    Man() {};
    Man(string myName):Person(myName) {};
    
    ~Man() {};
    
    void print(void);
    void speak(void);

private:


protected:


    
};







#endif