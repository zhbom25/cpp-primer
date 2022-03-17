#include <iostream>

int main(int argc, char** argv)
{
    //int i = -1, &r = i;
    const int i = -1, &r = i;
    const int *p1 = &i;
    const int i2 = i, &r1 = i;
    const int *const p2 = &i2;
    const int *const p3 = &i2;
    const int r2 = i;
    return 0;
}
