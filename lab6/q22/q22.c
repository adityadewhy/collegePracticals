//WAP to find the factorial of a given number.
#include <stdio.h>
void main(){
    int n = 0;
    int fact = 1;
    printf("enter num : ");
    scanf("%d",&n);
    for(int i = 1; i <= n ; i++){
        fact *= i;
    }
    printf("factorial of %d is : %d \n\n", n, fact);
}