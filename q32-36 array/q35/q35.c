#include <stdio.h>

int main() {
    int m, n;

    // Read the size of the matrix
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);

    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    if (m <= 0 || n <= 0) {
        printf("Invalid matrix size. Please enter valid dimensions.\n");
        return 1; // Exit the program with an error code
    }

    // Declare the matrix of size mxn
    int matrix[m][n];

    // Read the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Display the matrix
    printf("Entered matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }

    // Calculate and display the sum of diagonal elements
    if (m == n) {  // Check if it's a square matrix
        int sumDiagonal = 0;
        for (int i = 0; i < m; i++)
            sumDiagonal += matrix[i][i];

        printf("Sum of diagonal elements: %d\n", sumDiagonal);
    } else {
        printf("The matrix is not a square matrix. Diagonal sum undefined.\n");
    }

    return 0;
}
