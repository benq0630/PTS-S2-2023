#include "Vec3.h"
#include <iostream>
#include <cmath>

Vec3::Vec3() : x(0), y(0), z(0) {}

Vec3::Vec3(int xCoord, int yCoord, int zCoord) : x(xCoord), y(yCoord), z(zCoord) {}

double Vec3::length() {
    return std::sqrt(x * x + y * y + z * z);
}

void Vec3::printVec3() {
    std::cout << "(" << x << ", " << y << ", " << z << ")\n";
}
