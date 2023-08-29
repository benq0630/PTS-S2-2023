int sumArray(int arr[], int n) {
    int sum = 0;

    // Loop through the array and add up the elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}
