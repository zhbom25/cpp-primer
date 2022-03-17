#include <iostream>

int main(int argc, char** argv)
{
    int sum = 0;
    int count = 1;
    while (count <= 10) {
        sum += count;
        count++;
    }
    std::cout << " sum is : " << sum << std::endl;
    return 0;
}
