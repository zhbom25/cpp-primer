#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <deque>

using namespace std;

template <class T>
void print(T & input)
{
    for (auto iter = input.begin(); iter != input.end(); ++iter) {
        cout << *iter << endl;
    }
}

template <class T>
void forward_n(T & iter, int n)
{
    for (int i = 0; i < n; i++) {
        iter++;
    }
}

void replace(string& inputStr, const string& oldVal, const string& newVal)
{
    int start = 0;
    int inputLen = inputStr.length();
    int oldLen = oldVal.length();
    int newLen = newVal.length();
    for (auto iter = inputStr.begin(); iter != inputStr.end(); ) {
        if (start + oldLen-2 > inputLen) {
            break;
        }
        string s = inputStr.substr(start, oldLen);
        if (s == oldVal) {
            inputStr.erase(start, oldLen);
            inputStr.insert(start, newVal);
            start += newLen;
        } else {
            ++iter;
            ++start;
        }
    }
}

void replace2(string& inputStr, const string& oldVal, const string& newVal)
{
    int start = 0;
    int inputLen = inputStr.length();
    int oldLen = oldVal.length();
    int newLen = newVal.length();
    while (start + oldLen-2 <= inputLen) {
        string s = inputStr.substr(start, oldLen);
        if (s == oldVal) {
            //inputStr.erase(start, oldLen);
            //inputStr.insert(start, newVal);
            inputStr.replace(start, oldLen, newVal);
            start += newLen;
        } else {
            ++start;
        }
    }
}

string& join_str(string& inputStr, const string& prefix, const string& suffix)
{
    inputStr.insert(inputStr.begin(), prefix.begin(), prefix.end());
    return inputStr.append(suffix);
}

string& join_str2(string& inputStr, const string& prefix, const string& suffix)
{
    inputStr.insert(0, prefix);
    inputStr.insert(inputStr.end(), suffix.begin(), suffix.end());
    return inputStr;
}


