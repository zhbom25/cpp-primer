#include "test_7.h"

double Example::rate = 10;
vector<double> Example::vec{10.5,11.2};

int main(int argc, char** argv)
{
    C c(919);
    NoDefault &noDefault = c.getObj();
    noDefault.print();
    vector<C> vec;
    vec.push_back(c);
    Data data = {100, "hello world"};
    cout << " val : " << data.val << endl;
    cout << " string : " << data.s << endl;
    return 0;
}

