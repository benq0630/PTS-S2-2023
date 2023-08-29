#include <iostream>

int main() {
    int number;

    // Prompt the user for an integer
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Print "x" that number of times on different lines
    for (int i = 0; i < number; i++) {
        std::cout << "x" << std::endl;
    }

    return 0;
}
