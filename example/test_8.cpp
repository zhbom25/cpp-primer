#include "StrVec.h"

int main(int argc, char** argv)
{
    StrVec strvec1;
    string str1 = "hello";
    string str2 = "world";
    string str3 = "xxxxx";
    strvec1.push_back(str1);
    strvec1.push_back(str2);
    strvec1.push_back(str3);
    StrVec strvec2 = strvec1;
    StrVec strvec3;
    strvec3 = strvec1;
    cout << "=====strvec1=====" << endl;
    for (auto iter = strvec1.begin(); iter != strvec1.end(); ++iter) {
        cout << *iter << endl;
    }
    cout << "=====strvec2=====" << endl;
    for (auto iter = strvec2.begin(); iter != strvec2.end(); ++iter) {
        cout << *iter << endl;
    }
    cout << "=====strvec3=====" << endl;
    for (auto iter = strvec3.begin(); iter != strvec3.end(); ++iter) {
        cout << *iter << endl;
    }
    return 0;
}

