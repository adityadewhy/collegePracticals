// WAP that takes two operands and one operator from the user, perform the operation, and prints the result by using Switch statement.

#include <stdio.h>
void main()
{
    printf("\n\n");
    float num1, num2, result;
    char operator;

    printf("enter the two operands: ");
    scanf("%f%f", &num1, &num2);

    printf("enter the operator: ");
    scanf(" %c", &operator);
    // space before c is imp so as to consume the "space" from last printf, otherwise considers "space" as input directly
    

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%f", result);
        break;
    case '-':
        result = num1 - num2;
        printf("%f", result);
        break;
    case '*':
        result = num1 * num2;
        printf("%f", result);
        break;
    case '/':
        result = num1 / num2;
        printf("%f", result);
        break;
    default:
        printf("invalid operator");
    }
    printf("\n\n");
}