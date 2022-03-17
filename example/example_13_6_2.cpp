#include <vector>
#include <iostream>

using namespace std;

class PrivateCopy
{
public:
    PrivateCopy(const PrivateCopy&) = default;
    PrivateCopy& operator=(const PrivateCopy&) = default;

public:
    PrivateCopy() = default;
    ~PrivateCopy(){};
};

int main(int argc, char** argv)
{
    PrivateCopy a;
    PrivateCopy b = a;
    PrivateCopy c;
    c = a;
    return 0;
}
