#include <iostream>

int main(int argc, char** argv)
{
    int cur = 0, val = 0;
    if (std::cin >> cur) {
        int cnt = 1;
        while (std::cin >> val) {
            if (cur == val) {
                cnt++;
            } else {
                std::cout << cur << "counts is : " << cnt << std::endl;
                cur = val;
                cnt = 1;
            }
        }
        std::cout << cur << "counts is : " << cnt << std::endl;
    }
    return 0;
}
