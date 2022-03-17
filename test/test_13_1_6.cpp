#include <vector>
#include <string>
#include <list>
#include <iostream>

using namespace std;

class Employee
{
public:
    friend void f(const Employee& e);
    Employee(string name) : m_name(name) {
        m_no = "no_" + to_string(m_id++);
    };
    
    Employee(const Employee& e) {
        this->m_name = e.m_name;
        this->m_no = "no_" + to_string(m_id++);
    };

    Employee& operator=(const Employee& e) {
        this->m_name = e.m_name;
        this->m_no = "no_" + to_string(m_id++);
        return *this;
    };

private:
    string m_name;
    string m_no;
    static int m_id;
};

int Employee::m_id = 0;

void f(const Employee& e)
{
    cout << "name : " << e.m_name << endl;
    cout << "id : " << e.m_no << endl;
}

int main(int argc, char** argv)
{
    Employee e1("hello"), e2("world");
    f(e1);
    f(e2);
    Employee e3 = e1;
    Employee e4("zzzz");
    e4 = e2;
    f(e3);
    f(e4);
    return 0;
}

