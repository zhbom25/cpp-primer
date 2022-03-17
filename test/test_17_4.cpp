#include <vector>
#include <string>
#include <iostream>
#include <list>
#include <random>

using namespace std;

vector<unsigned> bad_randVec()
{
    default_random_engine e;
    uniform_int_distribution<unsigned> u(0,9);
    vector<unsigned> ret;
    for (size_t i = 0; i < 100; ++i)
        ret.push_back(u(e));
    return ret;
}

vector<unsigned> good_randVec()
{
    static default_random_engine e;
    static uniform_int_distribution<unsigned> u(0,9);
    vector<unsigned> ret;
    for (size_t i = 0; i < 100; ++i)
        ret.push_back(u(e));
    return ret;
}

int main(int argc, char** argv)
{
    vector<unsigned> v1(bad_randVec());
    vector<unsigned> v2(bad_randVec());
    /*
    cout << "=====v1=====" << endl;
    for (auto iter = v1.cbegin(); iter != v1.cend(); ++iter) {
        cout << *iter << endl;
    }
    cout << "=====v2=====" << endl;
    for (auto iter = v2.cbegin(); iter != v2.cend(); ++iter) {
        cout << *iter << endl;
    }
    */
    cout << ((v1 == v2) ? "equal" : "not equal") << endl;
    vector<unsigned> v3(good_randVec());
    vector<unsigned> v4(good_randVec());
    cout << ((v3 == v4) ? "equal" : "not equal") << endl;
    cout << "default bool values: " << true << " " << false
         << "\nalpha bool values: " << boolalpha
         << true << " " << false << endl;
    try {
        vector<int> vec = {1,2,3};
        int a[3] = {1,2,3};
    } catch (exception e) {
        cout << "exception" << endl;
        throw;
    } catch (const runtime_error &re) {
        cout << "runtime_error" << endl;
        throw;
    } catch (overflow_error eobj) {
        cout << "overflow_error" << endl;
    }
    return 0;
}


