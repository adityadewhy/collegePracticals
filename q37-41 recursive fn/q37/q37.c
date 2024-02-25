#include <stdio.h>

int fibb(int n) {
    if (n == 0 || n == 1)
        return n;
    else
        return fibb(n - 1) + fibb(n - 2);
}

int main() {
    int n, f, i;

    printf("Enter Number of Terms:\n");
    scanf("%d", &n);

    printf("Resultant Fibonacci Series is:\n");
    for (i = 0; i < n; i++) {
        f = fibb(i);
        printf("%d\t", f);
    }

    return 0;
}
