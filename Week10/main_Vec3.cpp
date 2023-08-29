#include <iostream>
#include "Vec3.h"

int main() {
    Vec3 vec1; // Using default constructor
    Vec3 vec2(1, 2, 3); // Using parameterized constructor

    std::cout << "Vec1: ";
    vec1.printVec3();
    std::cout << "Vec2: ";
    vec2.printVec3();

    std::cout << "Length of Vec1: " << vec1.length() << std::endl;
    std::cout << "Length of Vec2: " << vec2.length() << std::endl;

    return 0;
}
