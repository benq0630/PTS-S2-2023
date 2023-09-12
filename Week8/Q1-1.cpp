#include <iostream>
using namespace std;

int evenSum() {
    int lower_bound, upper_bound, sum = 0;

    // Ask for lower bound
    cout << "Enter the lower bound: ";
    cin >> lower_bound;

    // Ask for upper bound
    cout << "Enter the upper bound: ";
    cin >> upper_bound;

    // Check if lower_bound is greater than upper_bound
    if (lower_bound > upper_bound) {
        return -1;
    }

    // Calculate the sum of even integers between the bounds
    for (int i = lower_bound; i <= upper_bound; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    return sum;
}