// WAP to find the factorial of a given number.

#include <stdio.h>
void main()
{
    printf("\n\n");

    int num=0, fact=1;

    printf("enter the number");
    scanf("%d",&num);

    for(int i = 1; i <= num ; i++){
        fact *= i;
    }

    printf("required factorial is : %d",fact);

    printf("\n\n");
}