// Matrix Multiplication

#include <stdio.h>

void matrixMultiplication(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int row1, int col1, int row2, int col2) {
    // Initialize the result matrix with 0
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

int main() {
    int row1, col1, row2, col2;
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];

    // Input dimensions of the first matrix
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);

    // Input dimensions of the second matrix
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);

    // Check if matrix multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication is not possible. Columns of the first matrix must equal rows of the second matrix.\n");
        return 0;
    }

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Call the function to perform matrix multiplication
    matrixMultiplication(firstMatrix, secondMatrix, result, row1, col1, row2, col2);

    // Display the result of the multiplication
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
