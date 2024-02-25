//area and perimeter of rect

#include <stdio.h>

void main()
{
    int a, b, area, perimeter;
    printf("enter a and b: ");
    scanf("%d %d", &a, &b);
    area = a*b;
    perimeter = (2*a)+(2*b);
    printf("area = %d \n perimeter = %d \n\n", area,perimeter);
}