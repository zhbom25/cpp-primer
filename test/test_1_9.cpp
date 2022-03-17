#include <iostream>

int main(int argc, char** argv)
{
    int sum = 0;
    int count = 50;
    while (count <= 100) {
        sum += count;
        count++;
    }
    std::cout << " the sum is : " << sum << std::endl;
    return 0;
}
