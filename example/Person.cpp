#include "Person.h"

void Person::set_name(string name)
{
    m_name = name;
}

void Person::set_address(string address)
{
    m_address = address;
}

void Person::set_email(string email)
{
    m_email = email;
}

string Person::get_name() const
{
    return m_name;
}

string Person::get_address() const
{
    return m_address;
}

string Person::get_email() const
{
    return m_email;
}

void print(const Person &person)
{
    cout << "name : " << person.get_name() << " ; " << "address : "
         << person.get_address() << " ; " << "email : " << person.get_email() << endl;
}

Person read()
{
    Person person;
    string name(""), address(""),email("");
    cin >> name >> address >> email;
    person.set_name(name);
    person.set_address(address);
    person.set_email(email);
    return person;
}


