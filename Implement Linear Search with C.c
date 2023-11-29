#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to perform Linear Search on an array
int linearSearch(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        // If the key is found, return the index
        if (arr[i] == key) {
            return i;
        }
    }

    // If the key is not found, return -1
    return -1;
}

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Generate a random index within the array bounds
    int randomIndex = rand() % n;
    int key = arr[randomIndex];

    // Perform Linear Search
    int result = linearSearch(arr, n, key);

    printf("Randomly generated key: %d\n", key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}

