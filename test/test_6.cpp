#include "test_6.h"

int &get(int *arry, int index);

string read();

void print(const string &);

void print(double);

void fooBar(int ival);

int ff(int a, int b = 0, int c = 0);
char *init(int ht = 24, int wd = 1, char bckgrnd = 'a');
char init2(int ht, int wd, char bckgrnd);
char init2(int ht, int wd = 80, char bckgrnd = 'a')
{
    cout << " ht : " << ht << endl;
    cout << " wd : " << wd << endl;
    return bckgrnd;
}
char ret1 = init2(10);
char ret2 = init2(24, 10);
char ret3 = init2(14, '*');

void func_6_6(int, int)
{
    cout << "int int" << endl;
}

void func_6_6(double, double)
{
    cout << "double double" << endl;
}

typedef decltype(add_2) *f_add_2;
typedef decltype(sub_2) *f_sub_2;
typedef decltype(multi_2) *f_multi_2;
typedef decltype(divi_2) *f_divi_2;

f_add_2 pp1(int val1, int val2)
{
    int (*pp)(int a, int b);
    pp = &add_2;
    return pp;
}

f_sub_2 pp2(int val)
{
    int (*pp)(int a, int b);
    pp = &sub_2;
    return pp;
}

f_multi_2 pp3(int val)
{
    int (*pp)(int a, int b);
    pp = &multi_2;
    return pp;
}

f_divi_2 pp4(int val)
{
    int (*pp)(int a, int b);
    pp = &divi_2;
    return pp;
}

int main(int argc, char** argv)
{
    /*
    int ret1 = func_5(-10);
    cout << ret1 << endl;
    double ret2 = func_5(12.53);
    cout << ret2 << endl;
    int ret3 = func_4();
    cout << " output : " << ret3 << endl;
    for (size_t i = 0; i < 10; i++) {
        cout << count_calls() << endl;
    }
    int n1 = 10, n2 = 20;
    cout << " n1 : " << n1 << ";" << " n2 : " << n2 << endl;
    func_10(&n1, &n2);
    cout << " n1 : " << n1 << ";" << " n2 : " << n2 << endl;
    */
    /*
    int n1 = 22;
    int n2 = 21;
    cout << func_21(n1, &n2) << endl;
    cout << " n1 : " << n1 << endl;
    cout << " n2 : " << n2 << endl;
    for (int i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }
    string msg = "sjldalf";
    initializer_list<string> il{"hello world", "jdlsafja", "1223", msg};
    error_msg({"hello world", "jdlsafja", "1223", msg});
    func_27({1,8,3,9,10,22,45});
    */
    /*
    int ret = func_32(8);
    cout << " output : " << ret << endl;
    */
    int ia[10];
    for (int i = 0; i != 10; i++) {
        get(ia, i) = i*i;
    }
    for (int i = 0; i < 10; i++) {
        cout << " output : " << ia[i] << endl;
    }
    fooBar(128);
    char ret1 = init2(10);
    char ret2 = init2(24, 10);
    char ret3 = init2(14, '*');

    func_6_6(10, 12);
    func_6_6(10.11, 12.5);

    using Ftype = int(*)(int, int);
    vector<Ftype> vec;
    typedef decltype(add_2) *f_add_2;
    typedef decltype(sub_2) *f_sub_2;
    typedef decltype(multi_2) *f_multi_2;
    typedef decltype(divi_2) *f_divi_2;
    vec.push_back(add_2);
    vec.push_back(sub_2);
    vec.push_back(multi_2);
    vec.push_back(divi_2);
   
    f_add_2 func_ff = pp1(100, 20);
    int ret_ff = func_ff(40, 5);
    cout << " ret1 : " << ret1 << endl;
    for (size_t i = 0; i < vec.size(); i++) {
        auto pf = vec[i];
        int ret = pf(10, 20);
        cout << " result : " << ret << endl;
    }

    return 0;
}

int func_4(void)
{
    int input = 0;
    int ret = 1;
    cin >> input;
    if (input <= 0) {
        return -1;
    } 
    while (input > 0) {
        ret *= input--;
    }
    return ret;
}

template <class T>
T func_5(T val)
{
    if (typeid(val) == typeid(double)) {
        return fabs(val);
    } 
    if (typeid(val) == typeid(int)) {
        return abs(val);
    }
    return val;
}

size_t count_calls(void)
{
    static size_t ctr = 0;
    return ctr++;
}

void func_10(int *n1, int *n2)
{
    int tmp = *n2;
    *n2 = *n1;
    *n1 = tmp;
}

void func_12(int &n1, int &n2)
{
    int tmp = n2;
    n2 = n1;
    n1 = tmp;
}

int func_21(int n1, const int *n2)
{
    return (n1 > *n2) ? n1 : *n2;
}

void error_msg(initializer_list<string> il)
{
    for (auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << endl;
}

void func_27(initializer_list<int> il)
{
    for (const int* i = il.begin(); i != il.end(); i++) {
        cout << " output : " << *i << endl; 
    }
}

int &get(int *arry, int index) 
{
    return arry[index];
}

string read() 
{
    return "hello world";
}

void print(const string &)
{
    cout << "zxcvbnm" << endl;
}

void print(double)
{
    cout << 3.1415926 << endl;
}

void fooBar(int ival)
{
    //bool read = false;
    string s = read();
    //void print(int);
    //print("Value: ");
    print(ival);
    print(3.14);
}

int calc(int&, int&);
int calc(const int&, const int&);
int calc(char*, char*);
int calc(const char*, const char*);
int calc(char*, char*);
int calc(char* const, char* const);

typedef bool Func(const string&, const string&);
void lengthCompare(void);
typedef decltype(lengthCompare) Func2;
typedef bool(*FuncP)(const string&, const string&);
typedef decltype(lengthCompare) *FuncP2;

using F = int(int*, int);
using PF = int(*)(int*, int);


