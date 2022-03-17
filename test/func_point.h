#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <initializer_list>

using namespace std;

int func_add(int a, int b);

int func_sub(int a, int b);

int func_multi(int a, int b);

int func_divi(int a, int b);

typedef decltype(func_add) *f_add;
typedef decltype(func_sub) *f_sub;
typedef decltype(func_multi) *f_multi;
typedef decltype(func_divi) *f_divi;

f_add ff_test1(int val1, int val2);
f_sub ff_test2(int val1, int val2);
f_multi ff_test3(int val1, int val2);
f_divi ff_test4(int val1, int val2);

using Ftype = int(*)(int, int);


