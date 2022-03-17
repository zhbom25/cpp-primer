#include <iostream>

int main(int argc, char** argv)
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i) {
        sum += i;
    }
    std::cout << " the sum is : " << sum << std::endl;
    return 0;
}
