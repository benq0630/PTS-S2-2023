#include <iostream>

int** arrayOfArrays(int n_rows, int n_cols) {
    int** array2D = new int*[n_rows]; // Create an array of pointers to int arrays

    for (int i = 0; i < n_rows; ++i) {
        array2D[i] = new int[n_cols]; // Allocate memory for each row

        for (int j = 0; j < n_cols; ++j) {
            array2D[i][j] = 1; // Initialize all elements to 1
        }
    }

    return array2D; // Return the pointer to the first element
}

int main() {
    int n_rows = 4;
    int n_cols = 5;
    int** newArray = arrayOfArrays(n_rows, n_cols);

    // Print the array of arrays
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_cols; ++j) {
            std::cout << newArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Free the allocated memory
    for (int i = 0; i < n_rows; ++i) {
        delete[] newArray[i];
    }
    delete[] newArray;

    return 0;
}
