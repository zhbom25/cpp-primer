#include <iostream>

int main(int argc, char** argv)
{
    int start = 0, end = 0;
    int tmp;
    std::cout << " please input two number: " << std::endl;
    std::cin >> start >> end;
    if (start > end) {
        tmp = end;
        end = start;
        start = tmp;
    }
    while (start <= end) {
        std::cout << " the number is: " << start << std::endl;
        start++;
    }
    return 0;
}
