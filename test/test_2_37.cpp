#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a == b) d = a;
    cout << " c value : " << c << endl;
    cout << " d value : " << d << endl;
    return 0;
}
