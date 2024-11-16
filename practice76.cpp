#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int largest, secondLargest;

    // Handle edge case if there are fewer than 2 elements
    if (n < 2) {
        cout << "Array should have at least two elements." << endl;
        return -1;
    }

    // Initialize the first two elements
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Traverse through the array and update largest and secondLargest
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, n);
    if (result != -1) {
        cout << "The second largest number is: " << result << endl;
    }

    return 0;
}