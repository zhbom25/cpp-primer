#include "Person.h"

int main(int argc, char** argv)
{
    Person *person = new Person();
    person->set_name("zhaobo");
    person->set_address("anzu");
    person->set_email("eroach101");
    print(*person);
    delete(person);
    Person person1 = read();
    print(person1);
    Person person2("zhang");
    print(person2);
    Person person3("zhang3", "li4");
    print(person3);
    Person person4("wang5", "zhao6", "heng2");
    print(person4);
    return 0;
}
