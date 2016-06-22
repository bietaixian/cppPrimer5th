#ifndef CP5_7_50
#define CP5_7_50

#include <string>
#include <iostream>

class Person {
    friend std::istream& read(std::istream& is, Person& person);
    friend std::ostream& print(std::ostream& os, const Person& person);
public:
    Person() = default;
    Person(const std::string &name, const std::string &add) :name(name), address(add) {}
    explicit Person(std::istream& is) { read(is, *this); }

    const std::string& getName() const { return name; }
    const std::string& getAddress() const { return address; }

private:
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