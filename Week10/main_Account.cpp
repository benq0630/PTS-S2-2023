#include <iostream>
#include "Account.h"

int main() {
    Account acc1("John");
    Account acc2("Jane");

    acc1.deposit(100);
    acc1.withdraw(50);
    acc1.applyInterest(0.1);
    acc1.printInfo();

    acc2.deposit(200);
    acc2.withdraw(250); // This withdrawal should fail
    acc2.applyInterest(0.05);
    acc2.printInfo();

    return 0;
}
