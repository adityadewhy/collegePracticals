#include <stdio.h>

void main()
{
    int a, b;
    printf("enter a and b: ");
    scanf("%d %d", &a, &b);
    a= a+b;
    b= a-b;
    a=a-b;
    printf("swapped numbers are %d \n and %d \n\n", a,b);
}