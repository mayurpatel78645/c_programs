#include <stdio.h>

typedef union Marks {
  int i;
  float f;
  char str[20];
}Marks;

typedef union Data{
  
}Data;

int main(){

  Marks marks;
  marks.i = 85;
  printf("marks int: %d\n", marks.i);

  marks.f = 89.5;
  printf("marks int: %d\n", marks.i);
  printf("marks in float: %.2f", marks.f);

  return 0;
}