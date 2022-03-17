#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
    int a[7] = {2,5,3,1,4,7,6};
    vector<int> v1(a, a+5);
    vector<int> v2(v1);
    vector<int> v3 = v1;
    vector<int> v4(4, 12);
    vector<int> v5(10);
    vector<int> v6{10,12};
    return 0;
}
