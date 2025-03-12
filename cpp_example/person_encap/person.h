#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>
using namespace std;

namespace MAN {
    class Person;
}

class MAN::Person {
    public:
        int *pInt;
        
        Person() {};

        Person(string myName):name(myName) {
            pInt = new int(39);
            std::cout << "userdefine constructer1 " << std::endl;
        }

        Person(string myName, int myAge, bool myMale = 0):name(myName), age(myAge), male(myMale) {
            pInt = new int(90);
            std::cout << "userdefine constructer2 " << std::endl;
        }
        
        Person(const Person& p):name(p.name), age(p.age), male(p.male) {
            pInt = new int(*p.pInt);
            std::cout << "copy constructer" << std::endl;
        }

        ~Person() {
            delete pInt;
            std::cout << "default destructer" << std::endl;
        }
        
        
        void eat(void);
        void sleep(void);        
        void work(void);
        void print(void);
        void ageSet(int age);
        int ageGet(void) const;
        inline void growUP(void);
        
    private:
        mutable int age;    
        bool male;
        string name;        

};
 




#endif