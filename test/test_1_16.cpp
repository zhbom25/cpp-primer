#include <iostream>

int main(int argc, char** argv)
{
    int cur = 0;
    int sum = 0;
    while (std::cin >> cur) {
        sum += cur;
    }
    std::cout << " the sum is : " << sum << std::endl;
    return 0;
}
