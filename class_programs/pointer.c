#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  /* char* s = malloc(100);
  printf("Enter a string: ");
  fgets(s, sizeof(s), stdin);
  printf("%s", s);
  free(s);
  printf("%s", s); */

  // learn pointers
  /* int x = 10;
  int *p = &x;
  printf("value of x: %d\n", x);
  printf("Address of x: %p\n", &x);
  printf("value of p: %p\n", p);
  printf("Value of *p: %d\n", *p);

  *p = 50;
  printf("Value of x after dereferencing: %d\n", x);
  printf("address of x after derefrencing: %p", &x); */

  //pointer and array
  /* char arr[5] = {'a', 'e', 'i', 'o', 'u'};
  char *parr = arr;
  for (int i = 0; i < 5; i++){
    printf("arr[%d]: %c\n", i, *(parr+i));
  } */

  //swap using ptr
  /* int x = 10, y = 20;
  int *px = &x, *py = &y;
  int temp = *px;
  *px = *py;
  *py = temp;
  printf("value of x: %d\n", x);
  printf("Value of y: %d", y); */

  return 0;
}