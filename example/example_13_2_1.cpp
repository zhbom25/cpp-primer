#include <vector>
#include <string>
#include <iostream>

using namespace std;

class HasPtr
{
public:
    friend void f(const HasPtr& p);
    HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
    HasPtr(const HasPtr &p) : ps(new string(*(p.ps))), i(p.i) {}
    HasPtr& operator=(const HasPtr &p)
    {
        delete(ps);
        this->ps = new string(*(p.ps));
        this->i = p.i;
        return *this;
    }
    ~HasPtr() { delete ps; }

private:
    std::string *ps;
    int i;
};

void f(const HasPtr& p)
{
    cout << "ps : " << *(p.ps) << endl;
    cout << "i : " << p.i << endl;
}

int main(int argc, char** argv)
{
    HasPtr hp1("hello"), hp2("world");
    f(hp1);
    f(hp2);
    hp1 = hp2;
    return 0;
}


