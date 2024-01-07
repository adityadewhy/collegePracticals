// fibonacci

#include <stdio.h>

int main() {
  int n1 = 0;
  int n2 = 1;
  int n3;
  int n;
  int i;
  printf("till what number: ");
  scanf("%d", &n);
  printf("%d \t", n1);
  printf("%d \t", n2);
  while (n2 < n) {
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
    if (n2 < n) {
      printf("%d \t", n3);
    }
  }
  return 0;
}