#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt the user for an integer
    cout << "Enter an integer: ";
    cin >> number;

    // Print "x" that number of times on different lines
    for (int i = 0; i < number; i++) {
        cout << "x" << endl;
    }

    return 0;
}
