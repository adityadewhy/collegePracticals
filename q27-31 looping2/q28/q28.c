// WAP to print Armstrong numbers from 1 to 100.
#include <stdio.h>
#include <math.h>

void main(){
    printf("\n\n");

    int num = 0;
    printf("enter number: ");
    scanf("%d",&num);

    for(int i = 1 ; i <= num; i++){
        //find number of digits
        //find number of digits using a temporary variable
        int tempNum = i;
        int tempDigits = 0;
        while(tempNum > 0){
            tempDigits++;
            tempNum=tempNum/10;
        }
        
        int sumDigits = 0;
        int rem = 0;
        tempNum = i;
        while ( tempNum > 0){
            rem = tempNum % 10;
            
            sumDigits += pow(rem,tempDigits);
            tempNum = tempNum/10;
        }

        if(i == sumDigits){
            printf("%d \t", i);
        }
    }

    printf("\n\n");
}