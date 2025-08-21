#include <stdio.h>
int binarySearch(int arr[], int size, int key) {
    int low = 0,high = size - 1;
    // Keep searching while the low pointer is less than or equal to the high pointer
    while (low <= high) {
        // Calculate the middle index to prevent overflow
        int mid = low + (high - low) / 2;

        // If the key is found at the middle, return its index
        if (arr[mid] == key) {
            return mid;
        }

        // If the key is smaller than the middle element, search in the left half
        if (arr[mid] > key) {
            high = mid - 1;
        }
        // If the key is larger than the middle element, search in the right half
        else { // arr[mid] < key
            low = mid + 1;
        }
    }

    // If the loop finishes, the key was not found in the array
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
