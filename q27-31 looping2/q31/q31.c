#include <stdio.h>

/*
A
AB
ABC
ABCD
*/

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

// void main(){
//     int n = 0;
//     printf("enter no of lines : ");
//     scanf("%d",&n);

//     for(int i = 1; i<=n; i++){
//         for(int space = n; space>=i; space--){
//             printf(" ");
//         }
//         for(int j = 1; j <= i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

/*
4321
 321
  21
   1
*/
// void main(){
//     int n;
//     printf("till what number : ");
//     scanf("%d",&n);
//     for(int i = 1 ; i<= n; i++){
//         for(int space = 0; space<i ; space++){
//             printf(" ");
//         }
//         for(int num = n-i+1; num>0 ; num--){
//             printf("%d", num);
//         }
        
//         printf("\n");
//     }
    
// }

//    A
//   ABA
//  ABCBA
// ABCDCBA

void main(){
    int n;
    printf("how many lines : ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        for(int space = n-i; space>0; space--){
            printf(" ");
        }
        for(int ascLetter = 0; ascLetter<i; ascLetter++){
            printf("%c",ascLetter+65);
        }
        for(int desLetter = i-2; desLetter>=0; desLetter--){
            printf("%c",desLetter+65);
        }
        printf("\n");
    }

}