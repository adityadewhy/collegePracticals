/*
A
AB
ABC
ABCD
*/

#include <stdio.h>

// void main(){
//     int temp = 0;
//     for (int i = 65 ; i <= 70; i++){
//         for(int j = 65; j <= i ; j++){
//             printf("%c",j);
//         }
//         printf("\n");        
//     }
// }

/*
   *
  **
 ***
****
*/

void main(){
    int n = 0;
    printf("enter no of lines : ");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        for(int space = n; space>=i; space--){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}