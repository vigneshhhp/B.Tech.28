#include <stdio.h>
#include <time.h>

int binarySearchRefined(int arr[], int size, int key) {
    clock_t start, end;
    double time_taken;
    int low = 0, high = size - 1;
    int found_index = -1; // Default to "not found"

    start = clock();

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            found_index = mid; // Store the index
            break;             // Exit the loop
        }
        if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    // This section is now ALWAYS reached
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nSearch completed in: %f seconds", time_taken);

    return found_index; // Return the result
}

// The main function can remain the same
int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 1;

    int result = binarySearchRefined(arr, size, key);

    if (result != -1) {
        printf("\nElement %d found at index %d.\n", key, result);
    } else {
        printf("\nElement %d not found in the array.\n", key);
    }
    return 0;
}