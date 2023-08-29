#include <iostream>
#include "Account.h"
#include "Bank.h"

int main() {
    Account acc1("John");
    Account acc2("Jane");
    acc1.deposit(100);
    acc2.deposit(200);

    Bank bank(2);
    bank.addAccount(&acc1);
    bank.addAccount(&acc2);

    bank.applyInterestAll(0.1);

    Account** accounts = bank.getAccounts();
    for (int i = 0; i < bank.getNumAccounts(); ++i) {
        std::cout << "Account " << i + 1 << " info: ";
        accounts[i]->printInfo();
    }

    return 0;
}
