#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

namespace Exercise {
    int ivar = 0;
    double dvar = 0;
    const int limit = 1000;
};

int ivar = 0;

/*
using Exercise::ivar;
using Exercise::dvar;
using Exercise::limit;
*/

int main(int argc, char** argv)
{
    using Exercise::ivar;                   // 等价于 int ivar = 0;
    cout << "Exercise::ivar " << Exercise::ivar << endl;
    using Exercise::dvar;                   // 等价于 double dvar = 0;
    using Exercise::limit;                  // 等价于 int limit = 1000;

    //double dvar = 3.1416;
    cout << "dvar : " << dvar << endl;      // 0
    int iobj = limit + 1;
    cout << "iobj : " << iobj << endl;      // 1001
    ++ivar;
    cout << "ivar : " << ivar << endl;      // 1
    ++::ivar;                       // 等价于global::ival
    cout << "::ivar : " << ::ivar << endl;  // 2
    return 0;
}

