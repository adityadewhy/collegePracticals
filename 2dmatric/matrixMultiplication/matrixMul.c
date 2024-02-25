// 2d matrix multiplication

#include <stdio.h>

void main(){
    int rows1, cols1;
    printf("enter no of rows and cols for 1st matrix: ");
    scanf("%d %d",&rows1, &cols1);
    printf("\n\n");
    int mat1[rows1][cols1];

    int rows2, cols2;
    printf("enter no of rows and cols for 2nd matrix: ");
    scanf("%d %d",&rows2, &cols2);
    printf("\n\n");
    int mat2[rows2][cols2];

    int ans[rows1][cols2];

    for(int row = 0; row < rows1 ; row++){
        for(int col = 0; col < cols1 ; col ++){
            printf("enter %d%d value for 1st matrix: ", row,col);
            scanf("%d", &mat1[row][col]);
        }
    }

    for(int row = 0; row < rows2 ; row++){
        for(int col = 0; col < cols2 ; col ++){
            printf("enter %d %d value for 2nd matrix: ", row,col);
            scanf("%d", &mat2[row][col]);
        }
    }

    for(int row = 0; row < rows1 ; row++){
        for(int col = 0; col < cols2 ; col ++){
            ans[row][col] = 0;
            for (int k = 0; k < cols1; k++) {
                ans[row][col] += mat1[row][k] * mat2[k][col];
            }
        }
    }

    // Display the result
    printf("\nResult of matrix multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }
}