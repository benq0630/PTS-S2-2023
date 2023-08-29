#include <iostream>

// Sets entire column of matrix to newValue
void setColumn(int* matrix, int n, int c, int newValue) {
    for (int i = 0; i < n; ++i) {
        matrix[i * n + c] = newValue; // Update the elements in the specified column
    }
}

int main() {
    int n = 3;
    int* mat = singleBlock(n);

    // Print the original matrix
    for (int i = 0; i < n * n; ++i) {
        std::cout << mat[i] << " ";
        if ((i + 1) % n == 0) {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;

    int c = 1; // Column to be updated
    int newValue = 9;
    setColumn(mat, n, c, newValue);

    // Print the matrix after setting the column
    for (int i = 0; i < n * n; ++i) {
        std::cout << mat[i] << " ";
        if ((i + 1) % n == 0) {
            std::cout << std::endl;
        }
    }

    // Free the allocated memory
    delete[] mat;

    return 0;
}
