#include <string>
#include <iostream>
#include <vector>
#include "test_9.h"
#include <fstream>

using namespace std;

void func_47(void);
void func_49(void);
void func_9_6(void);

int main(int argc, char** argv)
{
    string s = "helo word";
    /*
    auto iter = s.begin();
    s.erase(iter, iter+3);
    s.insert(0, "hhhh");
    cout << s << endl;
    */
    for (auto iter = s.begin(); iter != s.end();) {
        if (*iter == 'l') {
            iter = s.erase(iter);
            cout << *iter << endl;
            s.insert(2, "asss");
            cout << *iter << endl;
        } else {
            ++iter;
        }
    }
    cout << s << endl;
    string inputStr = "helloworldxxxxooooxxxxzzzzxxxx";
    string oldVal = "xxxx";
    string newVal = "sssss";
    replace2(inputStr, oldVal, newVal);
    join_str2(inputStr, "yingjie", "zhaobo");
    cout << inputStr << endl;

    string name("AnnaBelle");
    auto pos1 = name.find("anna");
    if (pos1 == string::npos) {
        cout << "pos1 : " << pos1 << endl;
    }

    string river("Mississippi");
    auto first_pos = river.find("is");
    cout << "first_pos : " << first_pos << endl;
    auto last_pos = river.rfind("is");
    cout << "last_pos : " << last_pos << endl;

    func_47();
    func_49();
    func_9_6();
    return 0;
}

void func_47(void)
{
    string ss = "ab2c3d7R4E6";
    string numbers("0123456789");
    string chars("abcdefghijklmnopqrstuvwxyz");
    auto first_pos = ss.find_first_of(numbers);
    cout << "first_num_pos : " << first_pos << endl;
    auto first_not = ss.find_first_not_of(numbers);
    cout << "first_num_not : " << first_not << endl;
    auto first_c_pos = ss.find_first_of(chars);
    cout << "first_c_pos : " << first_c_pos << endl;
    auto first_c_not = ss.find_first_not_of(chars);
    cout << "first_c_not : " << first_c_not << endl;
    string tmp("x");
    auto tmp_pos = ss.find_first_of(tmp);
    cout << "tmp_pos : " << tmp_pos << endl;
}

void func_49(void)
{
    string ascender("bdfhijklt");
    string descender("gjpqy");
    string tmp_str("");
    ifstream ff;
    vector<string> vec;
    int max = 0;
    string out_word("");
    tmp_str = "1111222";
    /*
    auto pos1 = tmp_str.find_first_of(ascender);
    auto pos2 = tmp_str.find_first_of(descender);
    cout << "ascender : " << pos1 << endl;
    cout << "descender : " << pos2 << endl;
    */
    ff.open("test.txt", ifstream::in);
    while (!ff.eof()) {
        getline(ff, tmp_str);
        if (tmp_str.find_first_of(ascender) == string::npos && tmp_str.find_first_of(descender) == string::npos) {
            cout << "tmp_str : " << tmp_str << endl;
            int tmp_len = tmp_str.length();
            if (tmp_len > max) {
                max = tmp_len;
                out_word = tmp_str;
            }
        }
    }
    cout << "max : " << max << endl;
    cout << "out_word : " << out_word << endl;
}

void func_9_6(void)
{
    stack<int> intStack;
    for (size_t ix = 0; ix != 10; ++ix)
        intStack.push(ix);
    while (!intStack.empty()) {
        int value = intStack.top();
        cout << "value : " << value << endl;
        intStack.pop();
    }
}



