// WAP to add and multiply two matrices of order nxn.

#include <stdio.h>

int main()
{

    printf("\n\n");

    int n = 3; // Set the size of the matrices (nxn)

    int matrixA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrixB[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    int sumMatrix[3][3], productMatrix[3][3];

    // Addition of matrices
    printf("Sum of the matrices:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    // Multiplication of matrices
    printf("\nProduct of the matrices:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            productMatrix[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                productMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
            printf("%d\t", productMatrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}