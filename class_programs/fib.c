#include <stdio.h>

int fib_series(int n){
  if (n == 1 || n == 0) {
    return n;
  }else {
    return fib_series(n - 1) + fib_series(n - 2);
  }
}

int main(){
  /* int n = 6;
  int prev1 = 0;
  int prev2 = 1;
  int curr;

  if (n == 1){
    printf("%d", prev1);
    return 0;
  }
  printf("%d\n", prev1);
  for (int i = 0; i < n - 1; i++)
  {
    curr = prev1 + prev2;
    prev2 = prev1;
    prev1 = curr;
    printf("%d\n", curr);
  } */
  int n = 7;
  for (int i = 0; i < 7; i++)
  {
    printf("%d\n", fib_series(i));
  }
  
  return 0;
}