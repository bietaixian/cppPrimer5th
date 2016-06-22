#include <string>
#ifndef CP5_7_57
#define CP5_7_57

class Account {
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double newRate) { interestRate = newRate; };

private:
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = 15.55;
    static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();

#endif