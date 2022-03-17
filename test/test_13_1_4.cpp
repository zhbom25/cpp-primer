#include <vector>
#include <string>
#include <list>
#include <iostream>
#include <cstdlib>

using namespace std;

class numbered
{
public:
    friend void f(numbered s);
    friend void ff(const numbered& s);

    numbered() {
        int r = rand() % 1000;
        mysn = "mysn_" + to_string(r);
        cout << "called construct." << endl;
    };

    numbered(const numbered& s) {
        int r = rand() % 1000;
        this->mysn = "mysn_" + to_string(r);
        cout << "called numbered." << endl;
    };

    numbered& operator=(const numbered& s) {
        this->mysn = s.mysn;
        cout << "called operator." << endl;
        return *this;
    };

    // numbered& operator=(const numbered& s) = delete;

private:
    string mysn;
};

void f(numbered s)
{
    cout << s.mysn << endl;
}

void ff(const numbered& s)
{
    cout << s.mysn << endl;
}


int main(int argc, char** argv)
{
    numbered a, b = a, c = b;
    numbered d;
    d = a;
    ff(a);
    ff(b);
    ff(c);
    ff(d);
    return 0;
}


