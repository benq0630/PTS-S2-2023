#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    double balance;
    std::string accName;

public:
    Account();
    Account(std::string name);

    void deposit(int amount);
    bool withdraw(int amount);
    void applyInterest(double interest);
    void printInfo();
};

#endif // ACCOUNT_H
