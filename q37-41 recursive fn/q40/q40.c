#include <stdio.h>

int binary(int n) {
    int r;
    r = n % 2;
    n = n / 2;

    if (n == 0)
        printf("%d", r);
    else {
        binary(n);
        printf("%d", r);
    }
}

int main() {
    printf("\n\n");
    int n;

    printf("Enter Decimal Number:\n");
    scanf("%d", &n);

    printf("Binary of %d is:", n);
    binary(n);

    printf("\n\n");

    return 0;

    
}
