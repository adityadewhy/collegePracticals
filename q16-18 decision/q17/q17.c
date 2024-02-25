// WAP that accepts marks of five subjects and finds percentage and prints grades according to the following criteria:
// Between 90-100%-----Print ‘A’
// 80-90%-----------------Print ‘B’
// 60-80%-----------------Print ‘C’
// Below 60%-------------Print ‘D

#include <stdio.h>
void main()
{   
    printf("\n\n");

    float a, b, c, d, e;
    float per;
    printf("Enter marks of five subjects:");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    per = (a + b + c + d + e) / 5;
    printf("Percentage:%f\n", per);
    if (per >= 90 && per <= 100)
    {
        printf("Grade:A");
    }
    else if (per >= 80 && per < 90)
    {
        printf("Grade:B");
    }
    else if (per >= 60 && per)
    {
        printf("Grade:C");
    }
    else if (per < 60)
    {
        printf("Grade:D");
    }
    printf("\n\n");
}