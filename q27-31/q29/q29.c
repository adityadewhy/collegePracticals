// Write a program to generate sum of series 1!+2!+3!+--------------n!
#include <stdio.h>
void main(){
    printf("\n\n");

    int num = 0;
    printf("enter a number : ");
    scanf("%d",&num);

    int sumFact = 0;

    for(int i = 1; i <= num ; i++){
        int tempFact = 1;

        for(int j = 1; j <= i; j++){
            tempFact *= j;
        }
        sumFact += tempFact;

    }

    printf("%d", sumFact);

    printf("\n\n");
}