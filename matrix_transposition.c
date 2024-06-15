#include <stdio.h>

#define ROWS 3
#define COLS 2

// Function to transpose a matrix
void transposeMatrix(int mat[ROWS][COLS], int result[COLS][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[ROWS][COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int matrix[ROWS][COLS] = {{1, 2},
                              {3, 4},
                              {5, 6}};
    int result[COLS][ROWS];

    // Perform matrix transposition
    transposeMatrix(matrix, result);

    // Display original matrix and transposed matrix
    printf("Original Matrix:\n");
    printMatrix(matrix, ROWS, COLS);

    printf("Transposed Matrix:\n");
    printMatrix(result, COLS, ROWS);

    return 0;
}
