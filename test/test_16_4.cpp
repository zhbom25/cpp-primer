#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

template <typename T, typename V>
bool mfind(const T &beg, const T &end, const V &v)
{
    for (auto iter = beg; iter != end; ++iter) {
        if (*iter == v)
            return true;
    }
    return false;
}

template <typename T>
void print(T &arr, size_t n)
{
    auto item = arr;
    while (item != arr+n) {
        cout << *item << endl;
        ++item;
    }
}

template <typename T>
T& begin(T &arr)
{
    return arr;
}

template <typename T>
T& end(T &arr, size_t n)
{
    return arr+n;
}

int main(int argc, char** argv)
{
    vector<string> vec1;
    for (int i = 0; i < 10; i++) {
        vec1.push_back("hello" + to_string(i));
    }
    vector<int> vec2;
    for (int i = 0; i < 10; i++) {
        vec2.push_back(i);
    }
    bool ret1 = mfind(vec1.cbegin(), vec1.cend(), "hello2");
    cout << " ret1 : " << ret1 << endl;
    bool ret2 = mfind(vec2.cbegin(), vec2.cend(), 5);
    cout << " ret2 : " << ret2 << endl;
    //print(vec2);
    int arr3[] = {1,2,3,4,5,6,7,8,9,10};
    //print(arr3, 10);
    for (auto item = begin(arr3); item != end(arr3); ++item) {
        cout << " item : " << *item << endl; 
    }
    return 0;
}


