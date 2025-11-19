#include <stdio.h>

//a function to check if a number is even or odd
void check_even_odd(int number) {
  if(number == 0) {
    printf("0 is neither even nor odd.\n");
    return;
  }
  if (number < 0) {
    printf("Negative numbers are not considered for even/odd check.\n");
    return;
  }
  if (number % 2 == 0) {
    printf("%d is even.\n", number);
  } else {
    printf("%d is odd.\n", number);
  }
}

void sum_average(int n) {
  int arr[n];
  int sum = 0;
  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  double average = (double)sum / n;
  printf("Sum: %d\n", sum);
  printf("Average: %.2f\n", average);
}

int main() {
  printf("Choose a program to run:\n");
  printf("1. Check if a number is even or odd\n");
  printf("2. Calculate sum and average of n numbers\n");
  int choice;
  scanf("%d", &choice);
  if (choice == 1) {
    //even odd using if-else
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    check_even_odd(number);
  } else if (choice == 2) {
    //a function to take input n numbers in an array and find their sum and average
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
      printf("Number of elements must be positive.\n");
      return 1;
    }
    sum_average(n);
  } else {
    printf("Invalid choice.\n");
  }
  return 0;
}