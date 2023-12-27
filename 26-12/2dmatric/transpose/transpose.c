#include <stdio.h>

void main(){
    int rows1, cols1;
    printf("enter no of rows and cols for 1st matrix: ");
    scanf("%d %d",&rows1, &cols1);
    printf("\n\n");
    int mat1[rows1][cols1];

    for(int row = 0; row < rows1 ; row++){
        for(int col = 0; col < cols1 ; col ++){
            printf("enter %d%d value for 1st matrix: ", row,col);
            scanf("%d", &mat1[row][col]);
        }
    }

    // Display the mat1
    printf("\nResult of matrix multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    int temp;
    for(int row = 0; row < rows1 ; row++){
        for(int col = row+1; col < cols1 ; col ++){
            temp = mat1[row][col];
            mat1[row][col] = mat1[col][row];
            mat1[col][row] = temp;
        }
    }

    // Display the transpose

    printf("\nResult of matrix multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    
}