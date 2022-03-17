#include <vector>
#include <string>
#include <list>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    vector<string> vec = {"hello", "world", "xxx", "yyy"};
    function<bool (const string&)> fcn = &string::empty;
    find_if(vec.cbegin(), vec.cend(), fcn);
    if (vec[0].empty()) {
        cout << "empty" << endl;
    }
    return 0;
}


