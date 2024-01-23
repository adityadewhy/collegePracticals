/*
A
AB
ABC
ABCD
*/

#include <stdio.h>

void main(){
    int temp = 0;
    for (int i = 65 ; i <= 70; i++){
        for(int j = 65; j <= i ; j++){
            printf("%c",j);
        }
        printf("\n");        
    }
}