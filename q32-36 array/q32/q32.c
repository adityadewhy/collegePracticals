//WAP to search an element in a array using Linear Search.
#include<stdio.h>
void main(){
    printf("\n\n");
    int length, num;
    printf("enter the size of array: ");
    scanf("%d",&length);
    printf("enter the number to find: ");
    scanf("%d",&num);
    // int arr[length]={0};
    int arr[length];
    printf("enter elements of array: ");
    for(int i = 0; i<length; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i<=length; i++){
        if(arr[i]==num){
            printf("required element found at index : %d",i);
            break;
        }
        if(i==length){
            printf("required number is not present in given array");
        }
    }
    printf("\n\n");
}