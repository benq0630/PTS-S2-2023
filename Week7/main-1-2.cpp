#include <iostream>
using namespace std;

// This line tells this file that a function with this signature exists in a different file
extern int Multiply(int a, int b);

int main(int argc, char** argv)
{
    cout << Multiply(3, 4) << endl;
    return 0;
}