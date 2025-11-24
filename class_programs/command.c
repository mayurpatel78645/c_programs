#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int fib(int n){
  if (n <= 1) {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

void rev_str(char *s){
  char *start = s;
  char *end = s + (strlen(s) - 1);

  while (start < end){
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

int main(int argc, char *argv[]) {
  //use command-line args to print name
 /*  if (argc < 2) {
    printf("Usage: ./programme_name argument");
  }

  printf("%s", argv[1]); */

  //use command-line args to read a file
  /* if (argc != 2){
    printf("Usage: ./%s <file_name>\n", argv[0]);
  }

  FILE *fp = fopen(argv[1], "r");

  if (fp == NULL){
    printf("Error: Could not open file %s.\n", argv[0]);
    return 1;
  }

  char buffer[256];

  while(fgets(buffer, sizeof(buffer), fp) != NULL){
    printf("%s", buffer);
  }

  fclose(fp); */

  //take any num of integers as args and print the max
  /* if (argc < 2) {
    printf("Usage: ./%s <numbers...>\n");
    return 1;
  }

  int max = INT_MIN;

  for (int i = 1; i < argc; i++){
    int current = atoi(argv[i]);
    if (current > max){
      max = current;
    }
  }
  printf("Max value: %d", max); */

  //fib using pointers and command-line args
  /* if (argc != 2) {
    printf("Usage: ./%s <number>", argv[0]);
  }
  int len = atoi(argv[1]);
  for (int i = 0; i < len; i++){
    printf("%d\n", fib(i));
  } */

  //reverse string using pointers
  if (argc != 2){
    printf("Usage: %s <string>", argv[0]);
  }
  rev_str(argv[1]);
  printf("%s", argv[1]);

  return 0;
}