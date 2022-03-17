#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> v1{1,2,3,4,5,6,7,8,9,10};
    for (auto &i : v1) {
        i *= i;
    }
    for (auto &i : v1) {
        cout << " output : " << i << endl;
    }
    return 0;
}
