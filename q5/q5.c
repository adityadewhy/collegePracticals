#include <stdio.h>

void main()
{
    int a, b, c;
    printf("enter a and b: ");
    scanf("%d %d", &a, &b);
    c= a+b;
    a=c-a;
    b=c-b;
    printf("swapped numbers are %d \n and %d \n\n", a,b);
}