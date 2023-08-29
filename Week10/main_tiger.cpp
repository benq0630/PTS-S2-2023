#include <iostream>
#include "Tiger.h"

int main() {
    Tiger tiger1; // Using default constructor
    Tiger tiger2(5); // Using parameterized constructor

    std::cout << "Tiger 1's age: " << tiger1.getAge() << std::endl;
    std::cout << "Tiger 2's age: " << tiger2.getAge() << std::endl;

    tiger1.setAge(3);
    tiger2.setAge(7);

    std::cout << "Tiger 1's age after setAge: " << tiger1.getAge() << std::endl;
    std::cout << "Tiger 2's age after setAge: " << tiger2.getAge() << std::endl;

    return 0;
}
