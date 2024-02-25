//Write program to sort the array of character (String) in alphabetical order like STRING in GINRST.

#include <stdio.h>
#include <string.h>

void main(){
    char str1[10];
    char str2[10];
    printf("enter the string : ");
    gets(str1);

    int len1 = strlen(str1);
    
    for(int i = 0 ; i<len1-1 ; i++){
        int minL = i;

        for(int j = i+1; j<len1 ; j++){
            if (str1[minL]>str1[j]){
                minL = j;
            }

            if(minL != j){
                int temp = i;
                str1[i]=str1[minL];
                str1[minL]=str1[temp];
            }
        }
    }

    puts(str1);

}