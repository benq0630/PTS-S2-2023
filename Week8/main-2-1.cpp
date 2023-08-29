#include <iostream>
extern int sumArray(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "The sum of the array is: " << sumArray(arr, n) << std::endl;

    return 0;
}
