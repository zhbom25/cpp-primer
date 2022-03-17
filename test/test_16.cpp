#include <vector>
#include <string>
#include <list>
#include <iostream>
#include <sstream>

using namespace std;

template <typename T, class U, typename V> void f1(T, U, V);  // err
template <typename T> T f2(T&);   // err
template <typename T> inline T foo(T, unsigned int*);  // ok
template <typename T> T f4(T, T);  // ok
typedef char Ctype;   // ok
template <typename Ctype> Ctype f5(Ctype a);  // ok

template <typename T, typename It> class Blob
{
    Blob(It b, It e);
};

template <typename T> int compare(T t1, T t2)
{
    if (t1 > t2)
        return 1;
    else
        return -1;
}

template <typename T> void calc(T t, int val)
{
    cout << "T type : " << typeid(T).name() << " ; val : " << val << endl;
}

template <typename T1, typename T2> void f2(T1, T2);
template <typename T1, typename T2> void f2(T1 t1, T2 t2)
{
    cout << "T1 type : " << typeid(T1).name() << " ; val : " << t1 << endl;
    cout << "T2 type : " << typeid(T2).name() << " ; val : " << t2 << endl;
}

template <typename It>
auto fcn(It beg, It end) -> decltype(*beg)
{
    return *end;
}

template <typename It>
auto fcn3(It beg, It end) -> decltype(*(beg + 0))
{
    return *beg;
}

template <typename T> int compare1(const T&, const T&);

template <typename T> int compare1(const T& t1, const T& t2)
{
    if (t1 > t2)
        return -1;
    else
        return 1;
}
int (*pf1)(const int&, const int&) = compare1;

void func(int(*) (const string&, const string&));
void func(int(*) (const int&, const int&));

template <typename T>
typename remove_reference<T>::type&& m_move(T&& t)
{
    return static_cast<typename remove_reference<T>::type&&>(t);
}

template <typename T> string debug_rep(const T &t)
{
    ostringstream ret;
    cout << "function const T" << endl;
    cout << typeid(t).name() << endl;
    ret << t;
    return ret.str();
}

template <typename T> string debug_rep(T *p)
{
    ostringstream ret;
    ret << "pointer : " << p;
    if (p)
        ret << " " << debug_rep(*p);
    else
        ret << " null pointer";
    return ret.str();
}

template <typename ...Args>
void g(Args ... args)
{
    cout << "template Args count : " << sizeof...(Args) << endl;
    cout << "template args count : " << sizeof...(args) << endl;
}

template <typename T>
void print(ostream &os, const T &t)
{
    os << t << endl;
}

template <typename T, typename...Args>
void print(ostream &os, const T &t, const Args&... rest)
{
    os << t << ", ";
    print(os, rest...);
}

template <typename... Args>
void errormsg(ostream &os, const Args&... rest)
{
    print(os, debug_rep(rest)...);
}

int main(int argc, char** argv)
{
    cout << "compare1 : " << compare("hi", "world") << endl;
    cout << "compare2 : " << compare("bye", "dad") << endl;
    calc("hello", 12);
    f2(3.1415926, "xxxx");
    double d; float f; char c;
    calc(c, 'c');
    calc(d, f);
    f2(d, f);
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    int num = fcn(vec.begin(), vec.end());
    vector<string> vec3 = {"hello", "world", "xxxx", "yyyy"};
    auto num3 = fcn3(vec3.begin(), vec3.end());
    cout << " num3 : " << num3 << endl;
    string s1("hi!"), s2;
    s2 = m_move(string("bye!"));
    cout << " s2 : " << s2 << endl;
    s2 = m_move(s1);
    cout << " s2 : " << s2 << endl;
    cout << " s1 : " << s1 << endl;
    string s("hi");
    cout << debug_rep(s) << endl;
    cout << debug_rep(&s) << endl;
    cout << debug_rep("hi world!") << endl;
    g(1, "hello", 3.1415, -1, 'a', 4*5, vec);
    print(std::cout, 1, "hello", 3.1415, -1, 'a', 4*5); 
    errormsg(std::cout, 1, "hello", 3.1415, -1, 'a', 4*5);
    return 0;
}

