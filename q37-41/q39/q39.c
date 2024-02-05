#include <stdio.h>

int gcd(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}

int main() {
    int n1, n2, h;
    
    printf("Enter Two Numbers:\n");
    scanf("%d %d", &n1, &n2);

    h = gcd(n1, n2);

    printf("GCD of %d and %d is = %d\n", n1, n2, h);

    return 0;
}
