#include <stdio.h>
void main()
{
    printf("\n\n");
    int s1, s2, s3, s4, s5, avg;
    printf("enter the marks of subjects:");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    avg = (s1 + s2 + s3 + s4 + s5) / 5;
    printf("required percentage: %d \n", avg);
    if (avg > 90 && avg <= 100)
    {
        printf("A");
    }
    else if (avg > 80 && avg <= 90)
    {
        printf("B");
    }
    else if (avg > 60 && avg <= 80)
    {
        printf("C");
    }
    else
    {
        printf("D");
    }
    printf("\n\n");
}