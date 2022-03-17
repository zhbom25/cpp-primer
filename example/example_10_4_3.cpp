#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>
#include <fstream>
#include "../test/test_9.h"

using namespace std;

void func_34(void);
void func_35(void);
void func_37(void);

int main(int argc, char** argv)
{
    vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
    for (auto r_iter = vec.crbegin(); r_iter != vec.crend(); ++r_iter) {
        cout << " iter : " << *r_iter << endl;
    }
    sort(vec.begin(), vec.end());
    print(vec);
    //func_34();
    func_35();
    func_37();
    return 0;
}

void func_34(void)
{
    vector<int> vec = {19,18,17,16,15,14,21,22,23,24,25};
    for (auto r_iter = vec.crbegin(); r_iter != vec.crend(); ++r_iter) {
        cout << " iter : " << *r_iter << endl;
    }
}

void func_35(void)
{
    list<int> lst = {1,2,3,4,0,9,2,8,7,0,2,1,5,0,8,9,7};
    auto result = find(lst.crbegin(), lst.crend(), 0);
    cout << "result : " << *result << endl;
}

void func_37(void)
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9,11};
    int loc = 0;
    list<int> lst;
    for (auto r_iter = vec.crbegin(); r_iter != vec.crend(); ++r_iter) {
        if (loc >= 2 && loc <= 6) {
            lst.push_back(*r_iter);
        }
        loc++;
    }
    for (auto iter = lst.cbegin(); iter != lst.cend(); ++iter) {
        cout << "ret : " << *iter << endl;
    }
}


