#include <vector>
#include <string>
#include <list>
#include <iostream>

using namespace std;

void func_12_3(void);

int main(int argc, char** argv)
{
    //shared_ptr<int> p1 = new int(1024);
    shared_ptr<int> p2(new int(1024));
    *p2 = 12;
    func_12_3();
    return 0;
}

void func_12_3(void)
{
    shared_ptr<int> p(new int(42));
    int *q = p.get();
    q = nullptr;
    {
        //shared_ptr<int> q;
    }
    int foo = *p;
    cout << foo << endl;
}


