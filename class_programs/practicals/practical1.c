#include <stdio.h>
int main() {
float num1, num2;
int choice;
printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);
printf("Select an operation:\n");
printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n");
printf("Enter your choice (1-5): ");
scanf("%d", &choice);
switch(choice) {
case 1:
printf("Result: %.2f\n", num1 + num2);
break;
case 2:
printf("Result: %.2f\n", num1 - num2);
break;
case 3:
printf("Result: %.2f\n", num1 * num2);
break;
case 4:
if(num2 != 0)
printf("Result: %.2f\n", num1 / num2);
else
printf("Error! Division by zero.\n");
break;
case 5:
printf("Result: %.0f\n", (int)num1 % (int)num2);
break;
default:
printf("Invalid choice.\n");
}
return 0;
}