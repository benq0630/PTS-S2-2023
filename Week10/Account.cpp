#include "Account.h"
#include <iostream>

Account::Account() : balance(0), accName("") {}

Account::Account(std::string name) : balance(0), accName(name) {}

void Account::deposit(int amount) {
    if (amount >= 0) {
        balance += amount;
    }
}

bool Account::withdraw(int amount) {
    if (amount >= 0 && balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    return false;
}

void Account::applyInterest(double interest) {
    balance *= (1 + interest);
}

void Account::printInfo() {
    std::cout << "Name: " << accName << ", Balance: " << balance << std::endl;
}
