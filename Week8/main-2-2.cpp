#include <iostream>
using namespace std;

extern void increment(int*);

int main() {
    int a = 3;
    int* ptr = &a;

    // Should print 3
    std::cout << a << std::endl;

    increment(ptr);

    // Should print 4
    std::cout << a << std::endl;
}
