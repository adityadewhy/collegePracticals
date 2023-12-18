// celsius and f conversion
#include <stdio.h>

void main()
{
    float c, f;
    printf("enter C temperature ");
    scanf("%f", &c);
    f=(c*9/5)+32;
    printf("%f temperature in F \n\n",f);
}