#include <stdio.h>
// Structure to store employee details
struct Employee {
  int emp_id;
  char name[50];
  float basic_salary;
  float HRA;
  float DA;
  float PF;
  float PT;
  float gross_salary;
  float net_salary;
};
// Function to calculate salary components
void calculateSalary(struct Employee* emp) {
  emp->HRA = 0.20 * emp->basic_salary; // 20% HRA
  emp->DA = 0.10 * emp->basic_salary; // 10% DA
  emp->PF = 0.10 * emp->basic_salary; // 10% Provident Fund
  emp->PT = 200; // Fixed Professional Tax = Rs.200
  emp->gross_salary = emp->basic_salary + emp->HRA + emp->DA;
  emp->net_salary = emp->gross_salary - (emp->PF + emp->PT);
}
int main() {
  int n,i;
  printf("Enter number of employees: ");
  scanf("%d", &n);
  struct Employee emp[n];
  // Input employee details
  for(i = 0; i < n; i++) {
    printf("\nEnter details for employee %d:\n", i+1);
    printf("Enter Employee ID: ");
    scanf("%d", &emp[i].emp_id);
    printf("Enter name: ");
    scanf("%s", emp[i].name);
    printf("Enter basic salary: ");
    scanf("%f", &emp[i].basic_salary);
    calculateSalary(&emp[i]);
  }
  // Print salary details
  printf("\nEmployee Salary Details:\n");
  printf("----------------------------------------------------------------------------------------------------------------------------------------\n");
  printf("| %-8s | %-12s | %-12s | %-10s | %-10s | %-10s | %-12s | %-10s | %-12s |\n",
  "Emp ID", "Name", "Basic Salary", "HRA", "DA", "PF", "Gross Salary", "PT", "Net Salary");
  printf("----------------------------------------------------------------------------------------------------------------------------------------\n");
  for(i = 0; i < n; i++) {
    printf("| %-8d | %-12s | %-12.2f | %-10.2f | %-10.2f | %-10.2f | %-12.2f | %-10.2f | %-12.2f |\n",
    emp[i].emp_id, emp[i].name, emp[i].basic_salary, emp[i].HRA, emp[i].DA,
    emp[i].PF, emp[i].gross_salary, emp[i].PT, emp[i].net_salary);
  }
  printf("----------------------------------------------------------------------------------------------------------------------------------------\n");
  return 0;
}