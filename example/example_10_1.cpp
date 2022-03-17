#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <numeric>

using namespace std;

int main(int argc, char** argv)
{
    int val = 42;
    int arr[] = {10,22,31,245,45,78,90,46,53,42};
    vector<int> vec(arr, arr+sizeof(arr)/sizeof(arr[0]));
    auto result = find(vec.cbegin(), vec.cend(), val);
    if (result != vec.cend()) {
        cout << "find result : " << *result << endl;
    }

    string str("a value");
    list<string> lst = {"a", "a value", "a value", "a value hello", "a value hello world", "a value"};
    auto ret = find(lst.cbegin(), lst.cend(), str);
    if (ret != lst.cend()) {
        cout << "find str : " << *ret << endl;
    }

    int ia[] = {27, 210, 12, 47, 109, 83};
    int val1 = 83;
    int *ret1 = find(begin(ia), end(ia), val1);
    cout << "result num : " << *ret1 << endl;
    auto ret2 = find(ia+1, ia+5, val1);
    cout << "ret2 num : " << *ret2 << endl;

    auto sum = accumulate(vec.cbegin(), vec.cend(), 10.1);
    cout << "sum : " << sum << endl;
   
    auto sum_str = accumulate(lst.cbegin(), lst.cend(), string(""));
    cout << "str : " << sum_str << endl;

    vector<string> roster1 = {"hello", "world", "xxx", "yyy", "zzz", "nnn"};
    list<const char*> roster2 = {"hello", "world", "xxx", "yyy", "zzz", "mmm", "nnn"};
    bool ret3 = equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
    cout << "bool : " << ret3 << endl;

    int a1[] = {0,1,2,3,4,5,6,7,8,9};
    int a2[sizeof(a1)/sizeof(*a1)];
    auto ret4 = copy(begin(a1), end(a1), a2);
    cout << "ret4 : " << typeid(ret4).name()<< endl;
    for (auto iter = begin(a2); iter != end(a2); ++iter) {
        cout << "numbers : " << *iter << endl;
    }
    return 0;
}

