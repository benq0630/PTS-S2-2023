#include <iostream>
extern int boundSum();

int main() {
    int result = boundSum();
    std::cout << "Return value: " << result << std::endl;
    return 0;
}
