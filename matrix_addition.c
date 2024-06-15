#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to add two matrices
void matrixAddition(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{9, 8, 7},
                               {6, 5, 4},
                               {3, 2, 1}};
    int result[ROWS][COLS];

    // Perform matrix addition
    matrixAddition(matrix1, matrix2, result);

    // Display matrices and result
    printf("Matrix 1:\n");
    printMatrix(matrix1);

    printf("Matrix 2:\n");
    printMatrix(matrix2);

    printf("Result of addition:\n");
    printMatrix(result);

    return 0;
}
