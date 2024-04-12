// Perform 2D matrix array 
#include <stdio.h>

#define ROWS 2
#define COLS 2

// Function to perform matrix addition
void matrixAddition(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to perform matrix subtraction
void matrixSubtraction(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to perform matrix multiplication
void matrixMultiplication(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2}, {3, 4}};
    int matrix2[ROWS][COLS] = {{5, 6}, {7, 8}};
    int result[ROWS][COLS];

    // Perform matrix addition
    printf("Matrix Addition:\n");
    matrixAddition(matrix1, matrix2, result);
    displayMatrix(result);
    printf("\n");

    // Perform matrix subtraction
    printf("Matrix Subtraction:\n");
    matrixSubtraction(matrix1, matrix2, result);
    displayMatrix(result);
    printf("\n");

    // Perform matrix multiplication
    printf("Matrix Multiplication:\n");
    matrixMultiplication(matrix1, matrix2, result);
    displayMatrix(result);

    return 0;
}
