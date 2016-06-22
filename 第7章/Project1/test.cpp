#include <string>

using namespace std;

class A {
public:
    A() = default;
    explicit A(const string& str) :data(str) {}

    A &afun(A ) {}
    A &bfun(A& ) {}
    A &cfun(const A& )const {}

    string data;
};
int main() {
    string str = "hello";
    A null("9-999-99999-9");
    null.afun(str);
    null.bfun(str);
    null.cfun(str);
}