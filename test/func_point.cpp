#include "func_point.h"

int func_add(int a, int b)
{
    return a+b;
}

int func_sub(int a, int b)
{
    return a-b;
}

int func_multi(int a, int b)
{
    return a*b;
}

int func_divi(int a, int b)
{
    return a/b;
}

f_add ff_test1(int val1, int val2)
{
    Ftype pp = &func_add;
    return pp;
}

f_sub ff_test2(int val1, int val2)
{
    Ftype pp = &func_sub;
    return pp;
}

f_multi ff_test3(int val1, int val2)
{
    Ftype pp = &func_multi;
    return pp;
}

f_divi ff_test4(int val1, int val2)
{
    Ftype pp = &func_divi;
    return pp;
}

int main(int argc, char** argv)
{
    f_add ff= ff_test1(1,2);
    int ret1 = ff(10, 5);
    cout << " ret1 : " << ret1 << endl;
    Ftype pp = ff_test2(3,4);
    int ret2 = pp(20, 15);
    cout << " ret2 : " << ret2 << endl;
    return 0;
}


