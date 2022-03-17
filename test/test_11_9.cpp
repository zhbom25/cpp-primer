#include <vector>
#include <map>
#include <string>
#include <list>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    using ivecType = vector<int>::iterator;
    map<ivecType, int> vmap;
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
        vmap.insert(make_pair(iter, *iter));
    }
    cout << "======vector map=======" << endl;
    for (const auto &w : vmap) {
        cout << " value : " << w.second << endl;
    }
    using ilistType = list<int>::iterator;
    map<ilistType, int> lmap;
    list<int> lst = {9,8,7,6,5,4,3,2,1};
    for (auto iter = lst.begin(); iter != lst.end(); ++iter) {
        lmap.insert(make_pair(iter, *iter));
    }
    cout << "======list map=======" << endl;
    for (const auto &w : lmap) {
        cout << " value : " << w.second << endl;
    }
    return 0;
}
