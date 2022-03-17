#include <vector>
#include <string>
#include <list>
#include <iostream>
#include "TuplePrint.h"

using namespace std;

int main(int argc, char** argv)
{
    /*
    tuple<int, int, int> tuple1 = {10,20,30};
    typedef decltype(tuple1) trans;
    size_t sz = tuple_size<trans>::value;
    tuple_element<1, trans>::type cnt = get<1>(tuple1);
    cout << "element 1 : " << cnt << endl;
    */
    tuple<string, string, string> tuple2 = {"hello", "xxxxx", "world"};
    typedef decltype(tuple2) trans2;
    size_t sz2 = tuple_size<trans2>::value;
    mprint(tuple2);
    /*
    for (size_t i = 0; i < sz; ++i) {
        auto item_i = get<1>(tp);
        cout << "item : " << item_i << endl;
    }
    */
    return 0;
}


