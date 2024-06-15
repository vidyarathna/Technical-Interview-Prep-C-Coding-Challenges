#include <stdio.h>

// Function to merge two sorted arrays
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[], int *mergedSize) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and compare elements
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j])
            result[k++] = arr1[i++];
        else
            result[k++] = arr2[j++];
    }

    // Store remaining elements of first array
    while (i < size1)
        result[k++] = arr1[i++];

    // Store remaining elements of second array
    while (j < size2)
        result[k++] = arr2[j++];

    // Update the mergedSize pointer to reflect the size of the merged array
    *mergedSize = k;
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Create a result array to store the merged array
    int result[size1 + size2];
    int mergedSize;

    // Merge arrays
    mergeArrays(arr1, size1, arr2, size2, result, &mergedSize);

    // Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
