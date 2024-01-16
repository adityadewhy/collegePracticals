// WAP to find the reverse of a number.

#include <stdio.h>
void main(){
    printf("\n\n");
    int original = 0;
    int rev = 0;
    int rem;

    printf("enter a number : ");
    scanf("%d",&original);
    while(original>0){
        rem = original % 10;
        rev = (rev * 10) + rem;
        original = original/10;
    }
    printf("reversed number is : %d", rev);
    printf("\n\n");
}
