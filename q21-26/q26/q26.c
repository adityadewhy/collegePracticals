// WAP to find the sum of digits of the entered number.

#include <stdio.h>
void main()
{
    printf("\n\n");

    int num, sum;

    printf("entered num :");
    scanf("%d",&num);

    while(num>0){
        sum += num%10;
        num = num/10;
    }

    printf("sum of digits is : %d", sum);

    printf("\n\n");
}