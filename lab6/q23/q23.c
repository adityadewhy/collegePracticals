//WAP to print sum of even and odd numbers from 1 to N numbers.
#include <stdio.h>
void main(){
    int n = 0;
    int sumEven = 0;
    int sumOdd = 0;
    printf("enter num : ");
    scanf("%d",&n);
    for(int i = 1; i <= n ; i++){
        if(i % 2 == 0){
            sumEven += i;
        }else{
            sumOdd += i;
        }
    }
    printf("sum of even numbers till %d is : %d \n\n", n, sumEven);
    printf("sum of odd numbers till %d is : %d \n\n", n, sumOdd);
}