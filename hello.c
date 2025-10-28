#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int getValidInput(char *numStr){
    int valid,num;
    char ch;
    do{
        printf("Enter %s: ", numStr);
        valid = scanf("%d%c", &num, &ch);

        if (valid != 2 || ch != '\n') {
            printf("Invalid input, please enter an integer.\n\n");
            while (ch != '\n' && getchar() != '\n' && ch != EOF);
        } else {
            return num; // success
        }
    } while (1);
    return num;
  }

int main(){

  // sum of two numbers;
  /* int a,b;
  a = 10;
  b = 20;
  int sum = a + b;
  printf("sum of two values = %d", sum); */

  // avg of numbers;
  /* int a,b,c;
  a = 10;
  b = 20;
  c = 30;
  int sum = a + b + c;
  float avg = sum / 3;
  printf("avg of nums are: %.2f", avg); */

  // area and perimter of rectangle
  /* int l,b;
  l = 20;
  b = 13;
  float area = l * b;
  float perimeter = 2 * (l + b);
  printf("area and perimeter of rectangle are: %.2f and %.2f respectively", area, perimeter); */

  //area and perimeter of circle 
  /* int r = 15;
  //const float PI = 3.14;
  float area = M_PI * r * r;
  float perimeter = 2 * M_PI * r;
  printf("area of cirlcle is: %.2f and circumference is: %.2f", area, perimeter); */

  //area and perimeter of square
  /* int l = 9;
  float area = pow(l, 2);
  float perimeter = 4 * l;
  printf("area of square is: %.2f and perimeter is: %.2f", area, perimeter); */

  //sum of two nums using scanf
  /* int a,b;
  printf("enter a num: ");
  scanf("%d", &a);
  printf("enter another num: ");
  scanf("%d", &b);
  int sum = a + b;
  float avg = sum / 2;
  printf("avg: %.2f", avg);
  printf("sum: %d", sum); */

  //use function and do-while loop to get valid input
  /* int num1, num2;
  num1 = getValidInput("num1");
  num2 = getValidInput("num2");
  int sum = num1 + num2;
  printf("sum: %d", sum); */

  //check greater or smaller
  /* int a,b;
  printf("Enter a num1: ");
  scanf("%d", &a);
  printf("Enter a num2: ");
  scanf("%d", &b);
  if (a > b){
    printf("Num1: %d is greater than Num2: %d", a,b);
  }
  else {
    printf("Num2: %d is greater than Num1: %d", b,a);
  } */

  //check if num is positive or negative
  /* int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num > 0){
    printf("Number is positive");
  }
  else{
    printf("Number is negative");
  } */

  //if-else
  /* int num;
  printf("Enter a num: \n");
  scanf("%d", &num);
  if (num % 2 == 0){
    printf("Number is even");
  }
  else{
    printf("number is odd");
  } */

  //swapping
 /*  int a,b,temp;
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: \n\n");
  scanf("%d", &b);

  printf("The original a: %d\n", a);
  printf("The original b: %d\n\n", b);

  temp = a;
  a = b;
  b = temp;

  a = a + b;
  b = a - b;
  a = a - b;


  printf("The swapped a: %d\n", a);
  printf("The swapped b: %d", b);
 */

  //write a program to enter 3 numbers from the user and find out which number is greater by using and operator.

  /* int a,b,c;
  a = 10, b = 11, c = 12;
  int num_arr[4] = {a, b, c};
  int length = sizeof(num_arr) / sizeof(num_arr[0]);
  int max = 0;
  for( int i = 0; i < length; i++){
    if (num_arr[i] > max){
      max = num_arr[i];
    }
  }
  printf("max is: %d", max); */ 
  /* int a,b,c;
  a = getValidInput("num1");
  b = getValidInput("num2");
  c = getValidInput("num3");
  if (a > b && a > c){
    printf("a: %d is greater than a and b", a);
  }
  else if (b > c){
    printf("b: %d is greater than a and c", b);
  }
  else {
    printf("c: %d is greater than a and b", c);
  } */

  //find if the num is +ve, -ve or 0 using if-else
  /* int num;
  num = getValidInput("num1");
  if (num > 0){
    printf("num is positvie");
  }
  else if(num < 0){
    printf("num is negative");
  }
  else{
    printf("num is 0");
  } */

  //write a grade score program
  /* int sub1, sub2, sub3, sub4, sub5;
  sub1 = 39;
  sub2 = 39;
  sub3 = 39;
  sub4 = 39;
  sub5 = 39;
  float sum;
  sum = sub1 + sub2 + sub3 + sub4 + sub5;
  printf("sum: %.2f\n", sum);
  float percentage = (sum/500) * 100;
  printf("percent: %.2f\n", percentage);
  if (percentage >= 90){
    printf("Distinction");
  }
  else if (percentage >= 80 && percentage < 90){
    printf("Grade A++");
  }
  else if (percentage >= 70 && percentage < 80){
    printf("Grade A+");
  }
  else if (percentage >= 60 && percentage < 70){
    printf("Grade B++");
  }
  else if (percentage >= 50 && percentage < 60){
    printf("Grade B+");
  }
  else if (percentage >= 40 && percentage < 50){
    printf("Grade C+");
  }
  else {
    printf("Fail");
  } */

  //is a teen
  /* int age;
  printf("Enter an age: ");
  scanf("%d", &age);
  if (age <= 19 && age >= 13){
    printf("person is a teenager.");
  }else{
    printf("person is not a teenager.");
  } */

  //check if even or multiple of 5
  /* int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if ((num % 2 == 0) || (num % 5 == 0)){
    printf("num is either even or multiple of 5, num is: %d", num);
  }else {
    printf("num is neither even or multiple of 5, num is: %d", num);
  } */

  //voting eligibility using age and nationality
  /* int age;
  char affirm;
  printf("Enter age: ");
  scanf("%d", &age);
  printf("\nIs your nationality Indian? Enter Y or y: ");
  scanf(" %c", &affirm);
  if (age >= 18 && (affirm == 'Y' || affirm == 'y')){
    printf("You are eligible for voting");
  }else{
    printf("You are not eligible for voting");
  } */

  //leap year
  /* int year;
  printf("Enter a year: ");
  scanf("%d", &year);
  if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) ){
    printf("year: %d is a leap year", year);
  }else{
    printf("year: %d is not a leap year", year);
  } */
  return 0;
} 
