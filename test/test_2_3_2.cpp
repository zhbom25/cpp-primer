#include <iostream>

int main(int argc, char** argv)
{
    double dval = 1.02;
    double *pd = &dval;
    double *pd2 = pd;
    
    double *pi = pd;
    pi = &dval;
    return 0;
}
