#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Function to input a matrix from the user
void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to find the sum of two matrices
void addMatrices(int matrix1[MAX_ROWS][MAX_COLS], int matrix2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int rows, cols;

    // Input from user: matrix dimensions
    printf("Enter the number of rows (1-%d): ", MAX_ROWS);
    scanf("%d", &rows);
    printf("Enter the number of columns (1-%d): ", MAX_COLS);
    scanf("%d", &cols);

    if (rows <= 0 || rows > MAX_ROWS || cols <= 0 || cols > MAX_COLS) {
        printf("Invalid matrix dimensions.\n");
        return 1; // Return an error code
    }

    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS], sum[MAX_ROWS][MAX_COLS];

    // Input first matrix from user
    printf("For the first matrix:\n");
    inputMatrix(matrix1, rows, cols);

    // Input second matrix from user
    printf("For the second matrix:\n");
    inputMatrix(matrix2, rows, cols);

    // Print original matrices
    printf("\nOriginal matrices:\n");
    printf("First matrix:\n");
    printMatrix(matrix1, rows, cols);
    printf("\nSecond matrix:\n");
    printMatrix(matrix2, rows, cols);

    // Find and print the sum of matrices
    addMatrices(matrix1, matrix2, sum, rows, cols);
    printf("\nSum of matrices:\n");
    printMatrix(sum, rows, cols);

    return 0; // Return success code
}
