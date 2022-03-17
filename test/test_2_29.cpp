#include <iostream>

int main(int argc, char** argv)
{
    int i, *const cp = nullptr;
    int *p1 = nullptr;
    int *const p2 = nullptr;
    const int ic = 100;
    const int &r = ic;
    const int *const p3 = &ic;
    const int *p = nullptr;

    i = ic;    // ok
    //p1 = p3;   // err
    //p1 = &ic;  // err
    //p3 = &ic;  // err
    //p2 = p1;   // err
    //ic = *p3;  // err 
    return 0;
}
