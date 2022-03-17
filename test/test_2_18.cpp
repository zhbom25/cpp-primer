#include <iostream>

int main(int argc, char** argv)
{
    int* p = nullptr;
    int a = 10;
    int b = 20;
    p = &a;
    std::cout << " value p : " << *p << std::endl;
    *p = b;
    std::cout << " value a : " << a << std::endl;
    return 0;
}
