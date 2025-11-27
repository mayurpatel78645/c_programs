#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee {
  int id;
  char name[30];
  float base_salary;
  float hra;
  float da;
  float gross_salary;
  float pf;
  float net;
  int pt;
}Employee;

void calculate_salary(Employee *e) {
  e->pt = 200;
  e->hra = 0.20 * e->base_salary;
  e->pf, e->da = 0.10 * e->base_salary;
  e->gross_salary = e->base_salary + e->hra + e->da;
  e->net = e->gross_salary - e->pf - e->pt;
}

int main(int argc, char *argv[]) {
  if (argc != 4) {
    printf("Usage: %s <id> <name> <base_salary>", argv[0]);
  }

  int id = atoi(argv[1]);
  float base_salary = atof(argv[3]);
  Employee e1 = {id,"", base_salary};
  strcpy(e1.name, argv[2]);

  calculate_salary(&e1);

  printf("ID: %d\n", e1.id);
  printf("Name: %s\n", e1.name);
  printf("Base Salary: %.2f\n", e1.base_salary);
  printf("Gross Salary: %.2f\n", e1.gross_salary);
  printf("Net Salary: %.2f\n", e1.net);
  return 0;
}
