#ifndef _FLYWEIGHT_H_
#define _FLYWEIGHT_H_

#include <string>
#include <vector>
using namespace std;

class User {
public:
    User() {}
    User(string rn):name(rn) {}
    string& getName() {
        return name;
    }
private:
    string name;
};

class Web {
public:
    Web() {}
    Web(string rt):name(rt) {}
    virtual ~Web() {}
    virtual void addUser(User pu) {}
protected:
    string name;
};

class Blog : public Web {
public:
    Blog() {}
    Blog(string rn):Web(rn) {}
    void addUser(User pu) {
        cout << "Blog " << name <<  " User: " << pu.getName() << endl;
    }
};

class YellowPage : public Web {
public:
    YellowPage() {}
    YellowPage(string rn):Web(rn) {}
    void addUser(User pu) {
        cout << "YellowPage " << name <<  " User: " << pu.getName() << endl;
    }
};

class WebFactory {
public:
    WebFactory() {
        pb = NULL;
        pyp = NULL;
    }
    ~WebFactory() {
        if (pb != NULL) {
            delete pb;
        } 
        if (pyp != NULL) {
            delete pyp;
        }
    }

    void createWeb(string rt, string rn) {
        if (rt == "Blog") {
            pb = new Blog(rn);
        } else if (rt == "YellowPage") {
            pyp = new YellowPage(rn);
        }
    }
    void addUser(string rt, User ru) {
        if (rt == "Blog") {
            pb->addUser(ru);
            blog.push_back(ru);
        } else if (rt == "YellowPage") {
            pyp->addUser(ru);
            ypage.push_back(ru);
        }        
    }

private:
    Web* pb;
    Web* pyp;
    vector<User> blog;
    vector<User> ypage;
};

#endif
