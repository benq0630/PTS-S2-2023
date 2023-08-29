#ifndef VEC3_H
#define VEC3_H

class Vec3 {
private:
    int x, y, z;

public:
    Vec3(); // Default constructor
    Vec3(int xCoord, int yCoord, int zCoord);

    double length();
    void printVec3();
};

#endif // VEC3_H
