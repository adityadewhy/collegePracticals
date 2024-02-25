//Write a program in C to check whether the given string is a palindrome or not.

#include <stdio.h>
#include <string.h>

void main(){
    char str1[10];
    char str2[10];
    printf("enter the string : ");
    gets(str1);

    int len1 = strlen(str1);
    for(int i = len1-1,j=0; i>=0 ;i--,j++){
        str2[j]=str1[i];
    }


    puts(str1);
    puts(str2);

    if(strcmp(str1,str2)==0){
        printf("given string is palindrome");
    }else{
        printf("given string is not palindrome");
    }
}