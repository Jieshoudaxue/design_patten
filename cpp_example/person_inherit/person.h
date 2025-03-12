#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>
using namespace std;

class Person {
public:

    Person() {};
    
    Person(string myName) {
        name = myName;
    }
    
    ~Person() {};

    void print(void);
    
private:
    string name;
    
protected:
    
};







#endif