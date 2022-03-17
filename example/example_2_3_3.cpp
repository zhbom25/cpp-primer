#include <iostream>

int main(int argc, char** argv)
{
    int ival = 1024;
    int *pi = &ival;
    int **ppi = &pi;
    std::cout << " The value of ival : " << ival << std::endl;
    std::cout << " The value of pi : " << *pi << std::endl;
    std::cout << " The value of ppi : " << **ppi << std::endl;
    return 0;
}
