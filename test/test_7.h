#ifndef _TEST_7_H_
#define _TEST_7_H_

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class NoDefault
{
public:
    NoDefault(int val) : m_val(val) {}
    void print() {
        cout << " val : " << m_val << endl;
    }

private:
    int m_val;
};

class C
{
public:
    C(int val) : m_noDefault(NoDefault(val)) {
    }

    NoDefault& getObj() {
        return m_noDefault;
    }

private:
    NoDefault m_noDefault;
};

struct Data
{
    int val;
    string s;
};

class Example
{
public:
    static double rate;
    static const int vecSize = 20;
    static vector<double> vec;
};

#endif

