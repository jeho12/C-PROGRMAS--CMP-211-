// Implementing Binary Search with C



#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the key is present at the middle
        if (arr[mid] == key) {
            return mid;
        }

        // If the key is greater, ignore the left half
        if (arr[mid] < key) {
            left = mid + 1;
        } else { // If the key is smaller, ignore the right half
            right = mid - 1;
        }
    }

    // If the key is not present in the array
    return -1;
}

int main() {
    int array[] = { 12, 45, 67, 89, 101, 246, 365 };
    int key = 101;
    int size = sizeof(array) / sizeof(array[0]);

    int result = binarySearch(array, 0, size - 1, key);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

