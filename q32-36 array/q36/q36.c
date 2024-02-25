#include <stdio.h>

int main() {
    int m, n;

    // Read the size of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of columns: ");
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

    // Display the original matrix
    printf("Original matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }

    // Calculate and display the transpose of the matrix
    printf("Transpose matrix:\n");
    int transpose[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpose[i][j] = matrix[j][i];
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    // Check if the matrix is symmetric
    int isSymmetric = 1;  // Assume symmetric initially
    if (m == n) {  // Check if it's a square matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] != transpose[i][j]) {
                    isSymmetric = 0;  // Not symmetric
                    break;
                }
            }
            if (!isSymmetric) {
                break;
            }
        }
    } else {
        isSymmetric = 0;  // Not symmetric for non-square matrices
    }

    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
