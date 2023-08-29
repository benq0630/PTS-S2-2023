#include "Bank.h"
#include <iostream>

Bank::Bank() : capacity(10), numAccounts(0) {
    accounts = new Account*[capacity];
}

Bank::Bank(int accCapacity) : capacity(accCapacity), numAccounts(0) {
    accounts = new Account*[capacity];
}

void Bank::addAccount(Account* acc) {
    if (numAccounts < capacity) {
        accounts[numAccounts] = acc;
        ++numAccounts;
    }
}

Account** Bank::getAccounts() {
    return accounts;
}

int Bank::getNumAccounts() {
    return numAccounts;
}

void Bank::applyInterestAll(double interest) {
    for (int i = 0; i < numAccounts; ++i) {
        accounts[i]->applyInterest(interest);
    }
}
