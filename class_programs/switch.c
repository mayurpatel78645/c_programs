#include <stdio.h>

int main(){
  /* int week_num;
  printf("Enter a week number (1-7): ");
  scanf("%d", &week_num);
  switch (week_num)
  {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
  default:
    printf("Invalid week number!");
    break;
  } */

  //switch case two nums input and perform arithmetic operations
  /* int num1, num2;
  char operator;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  printf("Enter an operator (+, -, *, /, %%): ");
  scanf(" %c", &operator);
  switch (operator)
  {
    case '+':
      printf("%d + %d = %d", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%d - %d = %d", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%d * %d = %d", num1, num2, num1 * num2);
      break;
    case '/':
      if (num2 != 0){
        printf("%d / %d = %.2f", num1, num2, (float)num1 / num2);
      }else{
        printf("Error: Division by zero is not allowed.");
      }
      break;
    case '%':
      if (num2 != 0){
        printf("%d %% %d = %d", num1, num2, num1 % num2);
      }else{
        printf("Error: Division by zero is not allowed.");
      }
      break;
    default:
      printf("Invalid operator!");
      break;
  } */

  //grading system using switch case
  /* float sum;
  printf("Enter the total marks obtained (out of 500): ");
  scanf("%f", &sum);
  int percentage = (int)((sum / 500) * 100);
  printf("Percentage: %d%%\n", percentage);
  switch (percentage / 10)
  {
    case 10:
      printf("Grade A++");
      break;
    case 9:
      printf("Grade A+");
      break;
    case 8:
      printf("Grade B++");
      break;
    case 7:
      printf("Grade B+");
      break;
    case 6:
      printf("Grade C+");
      break;
    case 5:
      printf("Grade D");
      break;
    default:
      printf("Fail");
      break;
  } */
  
  return 0;
}