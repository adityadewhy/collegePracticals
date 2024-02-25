// WAP to print the sum of all numbers up to a given number.

#include <stdio.h>
void main()
{
    printf("\n\n");

    int n, sum;
    printf("enter the number: ");
    scanf("%d",&n);

    for (int i = 0; i <= n ; n++){
        sum+=i;
    }

    printf("sum till given number is : %d",sum);

    printf("\n\n");
}