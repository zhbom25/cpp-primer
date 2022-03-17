#include <iostream>
#include <string>
#include <vector>

using namespace std;

void f()
{
    static int call_cnt = 1;
    cout << " function caller count : " << call_cnt << endl;
    call_cnt++;
}

struct X {
    friend void f();
    X() { f(); }
    void g();
    void h();
};

void X::g() 
{
    return f();
}

//void f();

void X::h()
{
    return f();
}

int main(int argc, char** argv)
{
    X *x = new X();
    x->g();
    x->h();
    delete(x);
    return 0;
}
