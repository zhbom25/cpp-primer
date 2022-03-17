#include "test_15_13.h"

int main(int argc, char** argv)
{
    Base base("hello");
    Derived derived("world", 10);
    base.print(std::cout);
    derived.print(std::cout);
    return 0;
}
