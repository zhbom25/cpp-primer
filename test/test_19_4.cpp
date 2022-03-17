#include <vector>
#include <string>
#include <iostream>
#include <list>

using namespace std;

class Screen
{
public:
    typedef std::string::size_type pos;
    char get_cursor() const {return contents[cursor];}
    char get() const;
    char get(pos ht, pos wd) const;
private:
    std::string contents;
    pos cursor;
    pos height,width;
};

