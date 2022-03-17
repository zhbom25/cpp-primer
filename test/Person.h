#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Person
{
    Person() = default;
    Person(const string& s) : m_name(s) {};
    Person(const string& s1, const string& s2) : 
        m_name(s1), m_address(s2) {};
    Person(const string& s1, const string& s2, const string& s3) :
        m_name(s1), m_address(s2), m_email(s3) {};
    void set_name(string name);
    void set_address(string address);
    void set_email(string email);

    string get_name() const;
    string get_address() const;
    string get_email() const;
    
    string m_name;
    string m_address;
    string m_email;

};

Person read();
void print(const Person &);

#endif
