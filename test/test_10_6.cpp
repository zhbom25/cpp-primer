#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "test_9.h"

using namespace std;

void func_10_7(void);
void func_10_7_b(void);
void elimDups(vector<string> &words);

int main(int argc, char** argv)
{
    /*
    vector<int> vec = {0,1,2,3,4,5,6,7,8,9,10};
    fill_n(vec.begin(), vec.size(), 0);
    for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter) {
        cout << " output : " << *iter << endl;
    }
    */
    //func_10_7();
    func_10_7_b();
    vector<string> vec = {"hello", "world", "kksdd", "kkks", "wwws", "llass", "wiwee", "hello", "world", "kksdd", "hello"};
    elimDups(vec);
    return 0;
}

void func_10_7(void)
{
    vector<int> vec(20);
    list<int> lst; int i;
    while (cin >> i)
        lst.push_back(i);
    copy(lst.cbegin(), lst.cend(), vec.begin());
    for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter) {
        cout << *iter << endl;
    }
}

void func_10_7_b(void)
{
    vector<int> vec;
    vec.reserve(10);
    fill_n(vec.begin(), 10, 0);
    cout << "size : " << vec.size() << endl;
    for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter) {
        cout << " output : " << *iter << endl;
    }
}

void elimDups(vector<string> &words)
{
    // 按字典序排序words，以便查找重复单词
    sort(words.begin(), words.end());
    // 排序在范围的前部，返回指向不重复区域之后一个位置的迭代器
    auto end_unique = unique(words.begin(), words.end());
    // 使用向量操作erase删除重复单词
    words.erase(end_unique, words.end());
}


