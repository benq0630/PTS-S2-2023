#ifndef BANK_H
#define BANK_H

#include "Account.h" // Assuming Account.h is already implemented

class Bank {
private:
    int capacity;
    int numAccounts;
    Account** accounts;

public:
    Bank();
    Bank(int accCapacity);

    void addAccount(Account* acc);
    Account** getAccounts();
    int getNumAccounts();
    void applyInterestAll(double interest);
};

#endif // BANK_H
