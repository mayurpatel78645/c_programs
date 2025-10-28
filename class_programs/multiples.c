#include <stdio.h>

int main(void) {
  int n;
  printf("Enter an integer: ");
  if (scanf("%d", &n) != 1) return 1;

  if (n % 2 == 0 && n % 3 == 0)
    printf("%d is a multiple of 2 and 3.\n", n);
  else if (n % 2 == 0)
    printf("%d is a multiple of 2 but not 3.\n", n);
  else if (n % 3 == 0)
    printf("%d is a multiple of 3 but not 2.\n", n);
  else
    printf("%d is not a multiple of 2 or 3.\n", n);

  return 0;
}