#include <stdio.h>

/* int factorial(int n) {
  return (n == 0) ? 1 : n * factorial(n - 1);
} */

/* int factorial(int n) {
  if (n == 0) {
    return 1;
  }else{
    return n * factorial(n - 1);
  }
} */

int fib_series(int n){
  if (n == 0 || n == 1){
    return n;
  }else{
    return fib_series(n - 1) + fib_series(n - 2);
  }
}

int main(){

  int n = 5;
  //printf("Factorial of %d is: %d", n, factorial(n));

  printf("------Fib series for first %d digits------\n", n);

  for(int i = 0; i <= n; i++){
    printf("%d\n", fib_series(i));
  }
  return 0;
}