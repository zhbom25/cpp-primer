#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    vector<string> v1{"an", "xxx", "the"};
    vector<string> v2(v1);
    for (int i=0; i<v1.size(); i++) {
        cout << v1[i] << endl;
    }
    return 0;
}
