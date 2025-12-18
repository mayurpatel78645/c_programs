#include <stdio.h>

int factorial(int n) {
  if ( n == 0 || n == 1) {
    return n;
  }
  return n * factorial(n - 1);
}

int fib(int n) {
  if (n == 0 || n == 1) {
    return n;
  }

  return fib(n - 1) + fib(n - 2);
}

int main() {
/* int n, fact = 1;
printf("Enter a number: ");
scanf("%d", &n);
for(int i = 1; i <= n; i++) {
fact *= i;
}
printf("Factorial of %d is %d\n", n, fact); */
int n = 8;
printf("factorial of %d is %d\n", n, factorial(n));

for (int i = 0; i <= n; i++) {
  printf("%d\n", fib(i));
}
return 0;
}