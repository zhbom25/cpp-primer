#ifndef _TEST_VIRTUAL_H_
#define _TEST_VIRTUAL_H_

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Base 
{
public:
    Base(string name) : basename(name) {}
    string name() { return basename; }
    virtual void print(ostream &os) { os << basename << endl; }

protected:
    string basename;
};

class Derived : public Base
{
public:
    Derived(string name, int _i) : Base(name), i(_i) {}
    void print(ostream &os) { Base::print(os); os << " basename : " << basename << " i : " << i << endl; }
private:
    int i;
};

#endif
