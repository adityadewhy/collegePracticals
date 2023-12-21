//WAP to print the sum of all numbers up to a given number.
#include <stdio.h>
void main(){
    int n, sum=0;
    printf("enter desired number: ");
    scanf("%d",&n);
    for(int i = 1; i <= n ; i++){
        sum += i;
    }
    printf("sum till %d numbers is : %d \n\n", n,sum);
}