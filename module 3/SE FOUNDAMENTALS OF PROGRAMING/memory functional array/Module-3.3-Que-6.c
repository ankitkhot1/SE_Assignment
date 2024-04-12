//WAP to make addition, Subtraction and multiplication of two matrix using 
//2-D Array
#include <stdio.h>

// Function to add two matrices
void addMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[100][100], mat2[100][100], result[100][100];
    int rows1, cols1, rows2, cols2;

    // Input dimensions of first matrix
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input dimensions of second matrix
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Check if matrices can be added, subtracted, or multiplied
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added, subtracted, or multiplied.\n");
        return 1;
    }

    // Add matrices
    printf("Sum of matrices:\n");
    addMatrices(mat1, mat2, result, rows1, cols1);
    displayMatrix(result, rows1, cols1);

    // Subtract matrices
    printf("Difference of matrices:\n");
    subtractMatrices(mat1, mat2, result, rows1, cols1);
    displayMatrix(result, rows1, cols1);

    // Multiply matrices
    printf("Product of matrices:\n");
    multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);
    displayMatrix(result, rows1, cols2);

    return 0;
}
