#include <stdio.h>

int main(){

  /* for(int i = 1; i <= 10; i++){
    printf("%d\n", i);
  } */

  /* for(int i = 10; i > 0; i--){
    printf("%d\n", i);
  } */

  //calculate sum on n natural nums
  /* int num;
  num = 5;
  int sum = 0;
  for (int i = 1; i <= num; i++){
    sum += i;
  }
  printf("sum: %d", sum); */

  //for to while
  /* int i = 1;
  while(i <= 10){
    printf("%d\n", i);
    i++;
  } */

  //sum of n natural nums for to while
  /* int i = 1, num = 5, sum = 0;
  while(i <= num){
    sum += i;
    i++;
  }
  printf("%d\n", sum); */

  //while 10 to 1
  /* int i = 10;
  while(i > 0){
    printf("%d\n", i);
    i--;
  } */

  //print the given n math table
  /* int n = 5, table_limit = 10;
  for(int i = 1; i <= table_limit; i++){
    printf("%d * %d = %d\n", n, i, n * i);
  }
 */
  //using while
  /* int n = 5, table_limit = 10, i = 1;
  while(i <= table_limit){
    printf("%d * %d = %d\n", n, i, n * i);
    i++;
  } */

  //factorial using for loop
  /* int n = 5, factorial = 1;
  for(int i = n; i > 0; i--){
    factorial *= i;
  }
  printf("%d", factorial); */

  //using while loop
  /* int n = 5, factorial = 1;
  while (n > 0)
  {
    factorial *= n;
    n--;
  }
  printf("%d", factorial); */

  //do while loop
  /* int i = 1;
  do{
    printf("%d\n", i);
    i++;
  }while(i <= 10); */

  //10 - 1
  /* int i = 10;
  do
  {
    printf("%d\n", i);
    i--;
  } while (i > 0); */

  //table
  /* int n = 5, i = 1;
  do{
    printf("%d * %d = %d\n", n, i, n * i);
    i++;
  }while(i <= 10); */

  //is a prime number
  int n = 5;
  int isPrime = 1; //true
  for(int i = 2; i <= n / 2; i++){
    if(n % i == 0){
      isPrime = 0; //false
      break;
    }
  }
  if(isPrime){
    printf("%d is a prime number\n", n);
  } else {
    printf("%d is not a prime number\n", n);
  }

  return 0; 
}