#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <iostream>
#include <numeric>

using namespace std;

void func_10_1(void);
void func_10_4(void);

int main(int argc, char** argv)
{
    func_10_4();
    return 0;
}

void func_10_1(void)
{
    int val = 10;
    int tmp = 0;
    vector<int> vec;
    while (cin>>tmp) {
        vec.push_back(tmp);
    }
    int ret = count(vec.cbegin(), vec.cend(), val);
    cout << "ret : " << ret << endl;
}

void func_10_4(void)
{
    vector<double> vec;
    for (int i = 0; i < 10; ++i) {
        vec.push_back(i*1.01);
    }
    auto ret = accumulate(vec.cbegin(), vec.cend(), 0.0);
    cout << "ret : " << ret << endl;
}

