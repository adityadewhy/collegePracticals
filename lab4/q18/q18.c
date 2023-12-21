#include <stdio.h>
#include <math.h>

void main() {
  float a, b, c, d;
  float r1, r2;

  printf("enter a: ");
  scanf("%f", &a);
  printf("enter b: ");
  scanf("%f", &b);
  printf("enter c: ");
  scanf("%f", &c);

  d = pow(b, 2) - 4 * a * c;

  if (d > 0) {
    printf("real and distinct roots\n");

    r1 = (-b + pow(d, 0.5)) / (2 * a);
    r2 = (-b - pow(d, 0.5)) / (2 * a);

    printf("first root: %f\n", r1);
    printf("second root: %f\n", r2);
  } else if (d == 0) {
    printf("equal roots\n");

    r1 = (-b + pow(d, 0.5)) / (2 * a);

    printf("first root: %f\n", r1);
  } else {
    printf("imaginary roots\n");

    r1 = (-b + pow(d, 0.5)) / (2 * a);
    r2 = (-b - pow(d, 0.5)) / (2 * a);

    printf("first root: %f\n", r1);
    printf("second root: %f\n", r2);
  }
}