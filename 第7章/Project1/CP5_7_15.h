#ifndef CP5_ex7_15
#define CP5_ex7_15

#include <string>
#include <iostream>

struct Person {
    Person() = default;
    Person(const std::string &name, const std::string &add) :name(name), address(add) {}
    const std::string& getName() const { return name; }
    const std::string& getAddress() const { return address; }

    std::string name;
    std::string address;
};

std::istream& read(std::istream& is, Person& person)
{
    is >> person.name >> person.address;  
    if (!is) person = Person();
    return is;
}

std::ostream& print(std::ostream& os, const Person& person)
{
    os << person.name << " " << person.address;
    return os;
}

#endif