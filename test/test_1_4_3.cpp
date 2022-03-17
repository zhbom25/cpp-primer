#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string line;
    while (getline(cin, line))
        cout << line << endl;
    return 0;
}
