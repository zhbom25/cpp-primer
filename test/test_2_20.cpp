#include <iostream>

int main(int argc, char** argv)
{
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    std::cout << " value p1 : " << *p1 << std::endl;
    std::cout << " value i : " << i << std::endl;
    return 0;
}
