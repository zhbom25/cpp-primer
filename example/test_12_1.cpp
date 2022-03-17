#include "StrBlob.h"

int main(int argc, char** argv)
{
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
        cout << "b2 size : " << b2.size() << endl;
        cout << "b1 size : " << b1.size() << endl;
    }
    cout << "b1 size : " << b1.size() << endl;

    return 0;
}

