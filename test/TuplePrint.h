#include <vector>
#include <string>
#include <list>
#include <iostream>

using namespace std;

template <typename Tuple, size_t N>
class TuplePrint
{
public:
    static void print(const Tuple &t)
    {
        TuplePrint<Tuple, N-1>::print(t);
        cout << std::get<N-1>(t) << endl;
    }
};

template <typename Tuple>
class TuplePrint<Tuple, 1>
{
public:
    static void print(const Tuple &t)
    {
        cout << std::get<0>(t) << endl;
    }
};

template <typename... Args>
void mprint(const std::tuple<Args...>& t)
{
    TuplePrint<decltype(t), sizeof...(Args)>::print(t);
}


