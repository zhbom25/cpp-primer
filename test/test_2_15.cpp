#include <iostream>

int main(int argc, char** argv)
{
    int ival = 1.01;
    int &rval1 = ival;
    int &rval2 = rval1;
    int &rval3 = rval2;
    std::cout << " ival : " << ival << std::endl;
    std::cout << " rval1 : " << rval1 << std::endl;
    std::cout << " rval2 : " << rval2 << std::endl;
    std::cout << " rval3 : " << rval3 << std::endl;
    return 0;
}
