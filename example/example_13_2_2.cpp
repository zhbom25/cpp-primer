#include <vector>
#include <string>
#include <iostream>

using namespace std;

class HasPtr
{
public:
    friend void f(const HasPtr &p);
    friend void swap(HasPtr&, HasPtr&);

    HasPtr(const string &s = string()) : ps(new string(s)), use(new int(1)) {
        no = ++i;
    };

    HasPtr(const HasPtr& p) : ps(p.ps), use(p.use) {
        ++*use;
        no = ++i;
    };

    HasPtr& operator=(const HasPtr& p) {
        ++*(p.use);
        if (--*use == 0) {
            delete ps;
            delete use;
        }
        ps = p.ps;
        use = p.use;
        no = ++i;
        return *this;
    }

    ~HasPtr() {
        if (--*use == 0) {
            delete ps;
            delete use;
        }
    }

private:
    string *ps;
    int no;
    static int i;
    int* use;
};

int HasPtr::i = 0;

void f(const HasPtr &p)
{
    cout << " ps : " << *(p.ps) << endl;
    cout << " use : " << *(p.use) << endl;
    cout << " i : " << p.i << endl;
    cout << " no : " << p.no << endl;
}

void swap(HasPtr &lhs, HasPtr &rhs)
{
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
}

int main(int argc, char** argv)
{
    HasPtr p1("hello"), p2("world");
    HasPtr p3 = p1;
    HasPtr p4;
    p4 = p1;
    f(p1);
    f(p2);
    f(p3);
    f(p4);
    return 0;
}



