// WAP to print sum of even and odd numbers from 1 to N numbers.

#include <stdio.h>
void main()
{
    printf("\n\n");

    int num, sumOdd = 0, sumEven = 0;

    printf("enter a number : ");
    scanf("%d",&num);

    for(int i = 1; i <= num ; i++){
        if(i%2 == 0){
            sumEven += i;
        }else{
            sumOdd += i;
        }
    }

    printf("even place sum %d \n",sumEven);
    printf("odd place sum %d",sumOdd);

    printf("\n\n");
}