// Write a program to find the sum of following series 1-X1/1!+X2/2!- …………Xn/n!.

#include <stdio.h>
#include <math.h>

void main(){
    printf("\n\n");

    int n,x;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the value of n");
    scanf("%d",&n);

    float sum = 1.0;

    for (int i = 1; i <= n ; i++){

        int tempFact = 1;

        for(int j = 1 ; j <= i ; j++){
            tempFact *= j;
        }

        if(i%2==0){
            sum+= (pow(x,i)/tempFact);
        }else{
            sum -= (pow(x,i)/tempFact);
        }
    }

    printf("required result is : %f", sum );

    printf("\n\n");
}
