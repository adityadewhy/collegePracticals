// WAP to find the greatest of three numbers using nested if else.
#include<stdio.h>
void main(){
    int n1,n2,n3;
    printf("enter three numbers:  ");
    scanf("%d%d%d",&n1,&n2,&n3);
    
    if(n1>n2){
        if(n1>n3){
            printf(" n1 is greatest: %d", n1);
        }else{
            printf(" n3 is greatest: %d", n3);
        }
    }else{
        if(n2>n3){
            printf(" n2 is greatest: %d", n2);
        }else{
            printf(" n3 is greatest: %d",n3);
        }
    }

    printf("\n\n");
}