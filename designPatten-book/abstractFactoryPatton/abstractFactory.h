#ifndef _ABSTRACTFACTORY_H_
#define _ABSTRACTFACTORY_H_

#include <string>
using namespace std;

// 总体：这里有 2*2 四种情况：（sql，access）*（用户，部门）

// user 表示用户
typedef struct User {
    int id;
    string name;
} tUser;

// department 是公司部门
typedef struct Department {
    int id;
    string dptName;
} tDepartment;


class IUser {
public:
    IUser() {}
    virtual ~IUser() {}

    virtual void insert(tUser usr) = 0;
    virtual void getUser(int id) = 0;    
};

// sql 是一种大型数据库
class SqlUser : public IUser {
public:
    void insert(tUser usr) {
        cout << "in SQL, add " << usr.name << " in User table" << endl;
    }
    void getUser(int id) {
        cout << "in SQL, according to id " << id << " get a User table" << endl;
    }
};

// access 是一种小型数据库
class AccUser : public IUser {
public:
    void insert(tUser usr) {
        cout << "in Access, add " << usr.name << " in User table" << endl;
    }
    void getUser(int id) {
        cout << "in Access, according to id " << id << " get a User table" << endl;
    }
};


class IDepartment {
public:
    IDepartment() {}
    virtual ~IDepartment() {}

    virtual void insert(tDepartment dpt) = 0;
    virtual void getDepartment(int id) = 0;
};

class SqlDepartment : public IDepartment {
public:
    void insert(tDepartment dpt) {
        cout << "in SQL, add " << dpt.dptName << " in Department table" << endl;
    }
    void getDepartment(int id) {
        cout << "in SQL, according to id " << id << " get a Department table" << endl;
    }
};

class AccDepartment : public IDepartment {
public:
    void insert(tDepartment dpt) {
        cout << "in Access, add " << dpt.dptName << " in Department table" << endl;
    }
    void getDepartment(int id) {
        cout << "in Access, according to id " << id << " get a Department table" << endl;
    }
};


class IFactory {
public:
    IFactory() {}
    virtual ~IFactory() {}

    virtual IUser* createUser() = 0;
    virtual IDepartment* createDepartment() = 0;
};

// 生成 sql 数据的工厂，提供两个接口，一个是 user，另一个是 department
class SqlFactory : public IFactory {
    IUser* createUser() {
        return new SqlUser();
    }
    IDepartment* createDepartment() {
        return new SqlDepartment();
    }
};

// 生成 access 数据的工厂，提供两个接口，一个是 user，另一个是 department
class AccFactory : public IFactory {
    IUser* createUser() {
        return new AccUser();
    }
    IDepartment* createDepartment() {
        return new AccDepartment();
    }
};


#endif
