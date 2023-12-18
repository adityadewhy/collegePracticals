//greatest of 3 using ternary
#include<stdio.h>
void main(){
    int n1 = 5, n2 =10, n3 =15;
    (n1>n2)?(n1>n3 ? printf("n1 is greatest") : printf("n3 is greatest")):(n2>n3 ? printf("n2 is greatest"): printf("n3 is greatest"));
    printf("\n\n");

}