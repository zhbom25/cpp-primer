#include <vector>
#include <string>
#include <iostream>
#include <list>

class A 
{
public:
    A() = default;
    virtual ~A() {};
};

class B : public A
{
public:
    B() = default;
    virtual ~B() {};
};

class C : public B
{
public:
    C() = default;
    virtual ~C() {};
};

class D : public B
{
public:
    D() = default;
    virtual ~D() {};
};

int main(int argc, char** argv)
{
    A *pa = new C;
    B *pb = dynamic_cast<B*>(pa);  // ok
    B *pb1 = new B;
    C *pc = dynamic_cast<C*>(pb1);  // ok
    A *pa1 = new D;
    B *pb2 = dynamic_cast<B*>(pa1);  // err
    //delete pb;
    //delete pa;
    //delete pb1;
    delete pc;
    delete pb1;
    //delete pa1;
    //delete pa1;
    //delete pb2;
    return 0;
}


