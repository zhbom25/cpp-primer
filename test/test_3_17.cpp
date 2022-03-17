#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    vector<string> vec_str;
    string input_str;
    while (cin >> input_str) {
        if (input_str == "aaaa")
            break;
        vec_str.push_back(input_str);
    }
    for (auto &tmp_str : vec_str) {
        std::transform(tmp_str.begin(), tmp_str.end(), tmp_str.begin(), ::toupper);
    }
    for (auto &tmp_str : vec_str) {
        std::cout << tmp_str << std::endl;
    }
    //std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    //std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    return 0;
}
