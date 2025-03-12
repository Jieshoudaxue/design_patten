#include <iostream>

#include <string>
using namespace std;

class Student {
public:
    Student() {}
    ~Student() {}
    
    Student(string n): name(n) {
        Student::count = 0;
        //Student::count ++;
    }

    static void showStuCnt(void);

private:
    string name;
    static int count;
    
};

int Student::count = 0;

void Student::showStuCnt(void) {
    //cout << name << endl;
    cout << "student num = " << Student::count << endl;
    
}


int main(void) {
    Student s1("ycao");
    s1.showStuCnt();
    Student::showStuCnt();
    //cout << Student::count << endl;
    
    Student s2("miao");
    s2.showStuCnt();
    
    Student s3("xin");    
    s3.showStuCnt();
    
    s1.showStuCnt();
    
    
    
    return 0;
}
