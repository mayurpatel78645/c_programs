#include <stdio.h>
// Function to swap two numbers using pointers
void swap(int *x, int *y) {
  int temp;
  temp = *x; // Store value at address x
  *x = *y; // Assign value at address y to x
  *y = temp; // Assign value stored in temp to y
}

int main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("Before swapping: a = %d, b = %d\n", a, b);
  swap(&a, &b);
  printf("After swapping: a = %d, b = %d\n", a, b);
  return 0;
}