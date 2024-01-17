#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  
        } else if (arr[mid] < target) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 42, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 16;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}

