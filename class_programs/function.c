#include <stdio.h>

int sum(int a, int b) {
  return a + b;
}

int factorial(int a) {
  if (a <= 1) {
    return 1;
  }
  return a * factorial(a - 1);
}

int main() {
  //printf("sum: %d", sum(3, 4));
  printf("Factorial: %d", factorial(5));
}