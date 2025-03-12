#ifndef _PROXY_H_
#define _PROXY_H_

#include <string>
#include <iostream>

using namespace std;

class Image {
public:
    Image() {}
    Image(string n): name(n) {}
    virtual ~Image() {}

    virtual void show() {}
    
protected:
    string name;
};

class HugeImage : public Image {
public:
    HugeImage() {}
    HugeImage(string n): Image(n) {}

    void show() {
        cout << "show huge image: " << name << endl;
    }
};

class HugeImageProxy : public Image {
public:
    HugeImageProxy() {}
    HugeImageProxy(string n):Image(n), hi(NULL) {}
    ~HugeImageProxy() {
        delete hi;
    }

    void show();
private:
    HugeImage* hi;
};

#endif
