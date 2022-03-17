#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool func_11(int a, int b, int c, int d);
void func_10(void);
void func_13(void);
void func_15(void);
void func_4_5(void);
void trans_vec(void);
void func_23(void);
void func_27(void);
void func_28(void);
void func_29(void);

int main(int argc, char** argv)
{
    //func_13();
    //func_15();
    //func_4_5();
    //trans_vec();
    //func_23();
    //func_27();
    //func_28();
    func_29();
}

void func_10(void)
{
    int a = 0;
    while (cin >> a) {
        if (a==42)
            break;
    }
    return;
}

bool func_11(int a, int b, int c, int d)
{
    if (a>b && b>c && c>d) {
        return true;
    }
    return false;
}

void func_13(void)
{
    int i;
    double d;
    d = i = 3.5;
    cout << " d : " << d << " ; " << " i : " << i << endl;
    i = d = 3.5;
    cout << " d : " << d << " ; " << " i : " << i << endl;
    if (42 == i) {
        cout << "????" << endl;
    }
    if (i == 42) {
        cout << "!!!!" << endl;
    }
}

void func_15(void)
{
    int a[2] = {1,2};
    double dval; int ival; int *pi;
    pi = a;
    dval = ival = a[0];
    cout << " dval : " << dval << " ; " << " ival : " << ival << " ; " << " pi : " << *pi << endl;
}

void func_4_5(void)
{
    int i = 0, j;
    j = ++i;
    cout << " j: " << j << " ; " << " i: " << i << endl;
    j = i++;
    cout << " j: " << j << " ; " << " i: " << i << endl;
}

void trans_vec(void)
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> vec(a, a+10);
    for (int &ia : vec) {
        ia = (ia % 2 == 1) ? ia * 2 : ia;
    }
    for (auto &ia : vec) {
        cout << " data : " << ia << endl;
    }
}

void func_23(void)
{
    string s = "word";
    string p1 = s + s[s.size()-1];
    cout << " string : " << p1 << endl;
    p1 = s + s[s.size()-1] == "s" ? "" : "s";
    cout << " string : " << p1 << endl;
}

void func_27(void)
{
    unsigned long ul1 = 3, ul2 = 7;
    cout << " ul1 & ul2 : " << (ul1 & ul2) << endl;
    cout << " ul1 | ul2 : " << (ul1 | ul2) << endl;
    cout << " ul1 && ul2: " << (ul1 && ul2) << endl;
    cout << " ul1 || ul2: " << (ul1 || ul2) << endl;
}

void func_28(void)
{
    char *p = nullptr;
    vector<int> vec;
    cout << " int : " << sizeof(int) << endl;
    cout << " float : " << sizeof(float) << endl;
    cout << " double : " << sizeof(double) << endl;
    cout << " char : " << sizeof(char) << endl;
    cout << " string : " << sizeof(string) << endl;
    cout << " vector : " << sizeof(vec) << endl;
    cout << " point : " << sizeof(p) << endl;
}

void func_29(void)
{
    int x[10]; int *p = x;
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << "sizeof(x) : " << sizeof(x) << endl;
    cout << "sizeof(*x) : " << sizeof(*x) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;
    cout << "sizeof(p) : " << sizeof(p) << endl;
    cout << "sizeof(*p) : " << sizeof(*p) << endl;
}


