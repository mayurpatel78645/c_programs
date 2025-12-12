#include <stdio.h>
#include <math.h>

int static_func(){
  int static f = 0;
  f++;
  printf("f: %d\n", f);
}
int main(){
  static_func();
  static_func();
  return 0;
}