#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    vector<string> v1;
    {
        vector<string> v2 = {"hello", "world", "zzz"};
        v1 = v2;
    }

    for (auto iter = v1.cbegin(); iter != v1.cend(); ++iter) {
        cout << " v1 : " << *iter << endl;
    }
    /*
    for (auto iter = v2.cbegin(); iter != v2.cend(); ++iter) {
        cout << " v2 : " << *iter << endl;
    }
    */
    return 0;
}
