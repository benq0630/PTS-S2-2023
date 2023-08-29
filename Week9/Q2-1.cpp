#include <iostream>

int* singleBlock(int n) {
    int* blockArray = new int[n * n]; // Create a single block of memory

    for (int i = 0; i < n * n; ++i) {
        int row = i / n; // Calculate the row index
        blockArray[i] = row; // Initialize each element to its row index value
    }

    return blockArray; // Return the pointer to the first element
}

int main() {
    int n = 4;
    int* newArray = singleBlock(n);

    // Print the single block array
    for (int i = 0; i < n * n; ++i) {
        std::cout << newArray[i] << " ";
        if ((i + 1) % n == 0) {
            std::cout << std::endl;
        }
    }

    // Free the allocated memory
    delete[] newArray;

    return 0;
}
