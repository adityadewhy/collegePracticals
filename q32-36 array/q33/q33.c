//WAP to sort the elements of the array in ascending order using Bubble Sort technique.
#include<stdio.h>
void main(){
    printf("\n\n");
    int length, temp;
    printf("enter the length of array: ");
    scanf("%d",&length);
    int arr[length];
    printf("enter the elements of the array: ");
    for(int i = 0; i<length; i++){
        scanf("%d",&arr[i]);
    }

    //sort
    for(int i = 0; i<length-1; i++){
        for(int j = 0; j<length-1; j++){
            if(arr[j]>arr[j+1]){
                temp= arr[j+1];
                arr[j+1]=arr[j];
                arr[j]= temp;
            }
        }
    }
    for(int i = 0; i<length; i++){
        printf("%d",arr[i]);
    }
    printf("\n\n");

}