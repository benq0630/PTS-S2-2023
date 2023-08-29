#include <iostream>

int* createArray(int n) {
    int* arr = new int[n]; // Dynamically allocate an array of size n
    for (int i = 0; i < n; ++i) {
        arr[i] = i; // Initialize each element with its index
    }
    return arr; // Return a pointer to the first element of the array
}

int main() {
    // Test cases
    int n1 = 3;
    int* arr1 = createArray(n1);
    for (int i = 0; i < n1; ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr1; // Don't forget to free the allocated memory

    int n2 = 8;
    int* arr2 = createArray(n2);
    for (int i = 0; i < n2; ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr2;

    return 0;
}
