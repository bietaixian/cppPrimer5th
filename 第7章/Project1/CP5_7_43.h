
#ifndef CP5_7_43
#define CP5_7_43
class NoDefault {
public:
    NoDefault(int i) {};

};

class C {
public:
    C(int i = 0) :def(i) {};
private:
    NoDefault def;
};

#endif