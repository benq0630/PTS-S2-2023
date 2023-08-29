#include <iostream>

int** identity(int n) {
    int** matrix = new int*[n]; // Create an array of pointers to int arrays

    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n]; // Allocate memory for each row

        for (int j = 0; j < n; ++j) {
            if (i == j) {
                matrix[i][j] = 1; // Set diagonal elements to 1
            } else {
                matrix[i][j] = 0; // Set non-diagonal elements to 0
            }
        }
    }

    return matrix; // Return the pointer to the first element
}

int main() {
    int n = 4;
    int** identityMatrix = identity(n);

    // Print the identity matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << identityMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Free the allocated memory
    for (int i = 0; i < n; ++i) {
        delete[] identityMatrix[i];
    }
    delete[] identityMatrix;

    return 0;
}
