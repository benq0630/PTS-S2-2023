#include <iostream>
#include <string>
using namespace std;

void Mimic() {
    string input;
    while (true) {
        getline(cin, input);  // Get user input
        cout << input << endl;  // Echo back to the user

        if (input == "end") {
            break;  // Exit the loop if the user inputs "end"
        }
    }
}
