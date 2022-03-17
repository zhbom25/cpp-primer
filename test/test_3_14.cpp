#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    vector<string> vec;
    string input;
    while(cin >> input) {
        vec.push_back(input);
        if (input == "aaaa") {
            break;
        }
    }
    for (size_t i = 0; i < vec.size(); i++) {
        cout << " output : " << vec[i] << endl;
    }
    return 0;
}
