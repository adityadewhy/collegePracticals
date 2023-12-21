//WAP to check whether the entered number is prime or not.
#include<stdio.h>
void main(){
    int num = 0;
    printf("enter a number to check it its prime or not: ");
    scanf("%d", &num);
    int isPrime = 1;
    for(int i = 2 ; i <= (num / 2) ; i++){
        if(num%i == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1){
        printf("entered number is prime");
    }else{
        printf("entered number is not prime");
    }
}