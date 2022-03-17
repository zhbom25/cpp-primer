#include <iostream>

int main(int argc, char** argv)
{
    int r = 10;
    int rr = 20;
    const int r1 = 100;
    const int r2 = 200;
    const int *p1 = &r1;
    int *const p2 = &r;
    p1 = &r2;
    p1 = &r;
    //p2 = &rr;
    return 0;
}
