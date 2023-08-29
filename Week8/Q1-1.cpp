#include <iostream>
using namespace std;

int boundSum() {
    int lowerBound, upperBound, sum = 0;

    // Prompt for lower bound
    std::cout << "Enter the lower bound: ";
    std::cin >> lowerBound;

    // Prompt for upper bound
    std::cout << "Enter the upper bound: ";
    std::cin >> upperBound;

    // Check if lower bound is greater than upper bound
    if (lowerBound > upperBound) {
        return -1;
    }

    // Calculate the sum of integers between the bounds inclusive
    for (int i = lowerBound; i <= upperBound; ++i) {
        sum += i;
    }

    return sum;
}
