#include <stdio.h>
#include <stdlib.h>

// Function to perform Counting Sort
void countingSort(int arr[], int n, int range) {
    int output[n]; // Output array that will have sorted numbers
    int count[range + 1]; // Count array to store count of occurrences of each element

    // Initialize count array with all zeros
    for (int i = 0; i <= range; i++) {
        count[i] = 0;
    }

    // Store count of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Modify count array to store the actual position of each element in output array
    for (int i = 1; i <= range; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements into the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int range = 8; // Range of input elements (0 to 8 in this case)

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform Counting Sort
    countingSort(arr, n, range);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
