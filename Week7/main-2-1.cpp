#include <iostream>
using namespace std;

// Tell the compiler this function exists in another file
extern bool XGreaterThanY(int x, int y);

int main(int argc, char** argv) {
    if (XGreaterThanY(5, 3)) {
        cout << "5 is greater than 3" << endl;
    } else {
        cout << "5 is not greater than 3" << endl;
    }
    return 0;
}