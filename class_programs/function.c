#include <stdio.h>
#include <limits.h>
#include <string.h>

//sum funtion
int sum(int a, int b) {
  return a + b;
}

//factorial function
int factorial(int a) {
  if (a <= 1) {
    return 1;
  }
  return a * factorial(a - 1);
} 

//simple interest function
void simple_interest() {
  float p = 5000, r = 5, t = 2;
  printf("Simple interest is: %.2f", ((p * r * t) / 100));
}

//arr as parameter 
int max_in_arr(int arr[], int size) {
  int max = INT_MIN;
  for(int i = 0; i < size; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}

//palindrome
void check_palindrome(char str[], int size) {
  char rev[size];
  strcpy(rev, str);
  strrev(rev);
  if (strcmp(str, rev) == 0) {
    printf("%s is a plaindrome.", str);
  }else {
    printf("%s is not a palindrome.", str);
  }
}

//reverse string
void rev_str(char str[], int size) {
  char temp;
  int len = strlen(str);
  for (int i = 0, j = len - 1; i < j; i++, j--) {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}

int main() {
  //printf("sum: %d", sum(3, 4));
  //printf("Factorial: %d", factorial(5));
  //simple_interest();
  /* int arr[] = {1,2,3,4,5};
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("max: %d", max_in_arr(arr, size)); */
  //check_palindrome("racecar", 30);
  /* char str[30] = "race";
  rev_str(str, 30);
  printf("%s", str); */
  return 0;
}