#include <vector>
#include <string>
#include <list>
#include <iostream>

using namespace std;

void func_12_6(void);
void func_12_7(void);

vector<int>* _create_vec(void);
void _add_elem(vector<int> *vec);
void _print(vector<int> * vec);
void _add_elem1(shared_ptr<vector<int>> p);
void _print1(shared_ptr<vector<int>> p);


int main(int argc, char** argv)
{
    //func_12_6();
    func_12_7();
    return 0;
}

void func_12_6(void)
{
    vector<int> *p = _create_vec();
    _add_elem(p);
    _print(p);
    delete p;
    p = nullptr;
}

void func_12_7(void)
{
    shared_ptr<vector<int>> p = make_shared<vector<int>>();
    _add_elem1(p);
    _print1(p);
}

void _add_elem1(shared_ptr<vector<int>> p)
{
    int num;
    while (cin>>num) {
        p->push_back(num);
    }
}

void _print1(shared_ptr<vector<int>> p)
{
    for (auto iter = p->cbegin(); iter != p->cend(); ++iter) {
        cout << "num : " << *iter << endl;
    }
}

vector<int>* _create_vec(void)
{
    return new vector<int>;
}

void _add_elem(vector<int> *vec)
{
    int num;
    while (cin>>num) {
        vec->push_back(num);
    }
}

void _print(vector<int> * vec)
{
    for (auto iter = vec->cbegin(); iter != vec->cend(); ++iter) {
        cout << "num : " << *iter << endl;
    }
}


