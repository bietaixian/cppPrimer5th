#ifndef CP5_ex7_05
#define CP5_ex7_05

#include <string>

class Person {
    std::string name;
    std::string address;

public:
    const std::string& getName() const { return name; }
    const std::string& getAddress() const { return address; }
};

#endif