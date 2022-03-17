#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <initializer_list>

using namespace std;

int func_4(void);

template <class T>
T func_5(T val);

size_t count_calls(void);

void func_10(int *n1, int *n2);

void func_12(int &n1, int &n2);

int func_21(int n1, const int *n2);

void error_msg(initializer_list<string> il);

void func_27(initializer_list<int> il);

int func_32(int val)
{
    if (val > 1) {
        return val * func_32(val-1);
    }
    return 1;
}

int add_2(int a, int b)
{
    return a + b;
}

int sub_2(int a, int b)
{
    return a - b;
}

int multi_2(int a, int b)
{
    return a * b;
}

int divi_2(int a, int b)
{
    return a / b;
}


