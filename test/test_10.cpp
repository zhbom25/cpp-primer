#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>
#include <fstream>

using namespace std;
using std::placeholders::_1;
using std::placeholders::_2;
using std::placeholders::_3;

void func_15(int a);
void fcn1(void);
void fcn2();
void biggies(vector<string> &words, vector<string>::size_type sz, ostream &os, char c); 
void fcn3();
void fcn4();
void fcn5();
void fcn6();
void fcn7();
void fcn8();
void fcn9();
void fcn10();
void fcn30();

int main(int argc, char** argv)
{
    // 10.14
    auto f = [](int a, int b){ return a+b; };
    cout << typeid(f).name() << endl;
    cout << f(10, 30) << endl;
    // 10.15
    /*
    func_15(50);
    fcn1();
    fcn2();
    vector<string> words = {"hello", "world", "xxx", "zzz", "vvv", "yyy", "ppp"};
    biggies(words, words.size(), std::cout, 'a');
    cout << endl;
    fcn3();
    fcn4();
    fcn5();
    fcn6();
    fcn7();
    fcn8();
    fcn9();
    fcn10();
    */
    fcn30();
    return 0;
}

void func_15(int a)
{
    auto f = [a](int b) { return a+b; };
    cout << f(10) << endl;
}

void fcn1(void)
{
    size_t v1 = 42;
    auto f = [v1] {return v1;};
    v1 = 0;
    auto j = f();
    cout << j << endl;
}

void fcn2()
{
    size_t v1 = 42;
    auto f2 = [&v1] {return v1;};
    v1 = 0;
    auto j = f2();
    cout << j << endl;
}

void biggies(vector<string> &words, vector<string>::size_type sz, ostream &os = cout, char c = ' ')
{
    for_each(words.begin(), words.end(), [&os, c](const string &s) { os << s << c;});
}

void fcn3()
{
    size_t v1 = 42;
    auto f = [v1]() mutable { return ++v1; };
    v1 = 0;
    auto j = f();
    cout << j << endl;
}

void fcn4()
{
    size_t v1 = 42;
    auto f2 = [&v1] {return ++v1;};
    v1 = 0;
    auto j = f2();
    cout << "j : " << j << endl;
    cout << "v1 : " << v1 << endl;
}

void fcn5()
{
    size_t v1 = 5;
    auto f = [&]() {
        if (v1>0) {
            v1--;
            return false;
        }
        return true;
    };

    for (size_t i = 0; i < 8; ++i) {
        bool ret = f();
        if (ret == true) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
}

void fcn6()
{
    string str("");
    auto f = [&](const vector<int>& vec1, const vector<int>& vec2, vector<int>& vec) {
        auto iter1 = vec1.cbegin();
        auto iter2 = vec2.cbegin();
        for (; iter1 != vec1.cend() && iter2 != vec2.cend(); ++iter1, ++iter2) {
            vec.push_back(*iter1 + *iter2);
        }
        while (iter1 != vec1.cend()) {
            vec.push_back(*iter1);
            ++iter1;
            cout << "vec1" << endl;
        }
        while (iter2 != vec2.cend()) {
            vec.push_back(*iter2);
            ++iter2;
            cout << "vec2" << endl;
        }
        for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter) {
            if (*iter >= str.length())
                cout << "str length : " << *iter << endl;
        }
    };
    auto g = bind(f, _1, _2, _3);
    str = "hello";
    vector<int> vec1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> vec2 = {-1,-2,-3,4,-5,4};
    vector<int> vec;
    g(vec1, vec2, vec);
    for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter) {
        cout << *iter << endl;
    }
}

void fcn7()
{
    list<int> lst = {1,2,3,4};
    list<int> lst2, lst3;
    copy(lst.cbegin(), lst.cend(), front_inserter(lst2));
    for (auto iter = lst2.cbegin(); iter != lst2.cend(); ++iter) {
        cout << "lst2 : " << *iter << endl;
    }
    copy(lst.cbegin(), lst.cend(), inserter(lst3, lst3.begin()));
    for (auto iter = lst3.cbegin(); iter != lst3.cend(); ++iter) {
        cout << "lst3 : " << *iter << endl;
    }
}

void fcn8()
{ 
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    list<int> lst1, lst2, lst3;
    copy(vec.cbegin(), vec.cend(), front_inserter(lst1));
    cout << "========lst1========" << endl;
    for (auto iter = lst1.cbegin(); iter != lst1.cend(); ++iter) {
        cout << "lst1: " << *iter << endl;
    }
    cout << "========lst2=======" << endl;
    copy(vec.cbegin(), vec.cend(), back_inserter(lst2));
    for (auto iter = lst2.cbegin(); iter != lst2.cend(); ++iter) {
        cout << "lst2: " << *iter << endl;
    }
    cout << "========lst3=======" << endl;
    copy(vec.cbegin(), vec.cend(), inserter(lst3, lst3.begin()));
    for (auto iter = lst3.cbegin(); iter != lst3.cend(); ++iter) {
        cout << "lst3 : " << *iter << endl;
    }
}

void fcn9()
{
    istream_iterator<int> in(cin), eof;
    cout << accumulate(in, eof, 0) << endl;
}

void fcn10()
{
    ifstream ff;
    ff.open("test.txt", ifstream::in);
    istream_iterator<string> in_iter(ff);
    istream_iterator<string> eof;
    vector<string> vec;
    while (in_iter != eof) {
        vec.push_back(*in_iter++);
    }
    for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter) {
        cout << "test : " << *iter << endl;
    }
}

void fcn30()
{
    istream_iterator<int> in_iter(cin), eof;
    vector<int> vec;
    copy(in_iter, eof, back_inserter(vec));
    sort(vec.begin(), vec.end());
    for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter) {
        cout << "iter : " << *iter << endl;
    }
}


