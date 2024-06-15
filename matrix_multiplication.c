#include <stdio.h>

#define ROWS1 3
#define COLS1 2
#define ROWS2 2
#define COLS2 3

// Function to perform matrix multiplication
void matrixMultiplication(int mat1[ROWS1][COLS1], int mat2[ROWS2][COLS2], int result[ROWS1][COLS2]) {
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[ROWS1][COLS2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int matrix1[ROWS1][COLS1] = {{1, 2},
                                 {3, 4},
                                 {5, 6}};
    int matrix2[ROWS2][COLS2] = {{1, 2, 3},
                                 {4, 5, 6}};
    int result[ROWS1][COLS2];

    // Perform matrix multiplication
    matrixMultiplication(matrix1, matrix2, result);

    // Display matrices and result
    printf("Matrix 1:\n");
    printMatrix(matrix1, ROWS1, COLS1);

    printf("Matrix 2:\n");
    printMatrix(matrix2, ROWS2, COLS2);

    printf("Result of multiplication:\n");
    printMatrix(result, ROWS1, COLS2);

    return 0;
}
