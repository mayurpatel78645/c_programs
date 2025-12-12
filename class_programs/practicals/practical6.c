#include <stdio.h>
int main() {
int marks;
printf("Enter marks: ");
scanf("%d", &marks);
if(marks >= 90)
printf("Grade: A (Excellent)\n");
else if(marks >= 75)
printf("Grade: B (Good)\n");
else if(marks >= 50)
printf("Grade: C (Average)\n");
else if(marks >= 40)
printf("Grade: D (Pass)\n");
else
printf("Grade: F (Fail)\n");
return 0;
}