//area and circumference of circle
#include <stdio.h>
#define PI 3.14

void main()
{
    float r, area, circumference;
    printf("enter r: ");
    scanf("%f",&r);
    area = PI *r*r;
    circumference = 2*PI*r;
    printf("area = %f \n circumference = %f \n\n", area, circumference);
}