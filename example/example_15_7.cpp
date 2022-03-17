#include <vector>
#include <string>
#include <iostream>

using namespace std;

class B
{
public:
    B() {};
    B(const B&) = delete;
    B& operator=(const B&) = delete;
};

class D : public B
{

};

int main(int argc, char** argv)
{
    D d;
    //D d2(d);
    D d3;
    d3 = (std::move(d));
    return 0;
}
