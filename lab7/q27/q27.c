//WAP to find the reverse of a number.
#include <stdio.h>
void main(){
    int num = 0;
    printf("enter a number : ");
    scanf("%d", &num);
    int rem, rev;
    while(num > 0){
        rev = rev * 10 + num % 10;
        num = num/10;
    }
    printf("reverse of %d is : ", rev);
}