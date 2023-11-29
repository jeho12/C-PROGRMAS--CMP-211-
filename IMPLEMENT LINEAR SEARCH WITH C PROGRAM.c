// IMPLEMENT LINEAR SEARCH WITH C PROGRAM

#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index where the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int array[] = { 12, 45, 67, 89, 101, 246, 365 };
    int key = 101;
    int size = sizeof(array) / sizeof(array[0]);

    int result = linearSearch(array, size, key);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

