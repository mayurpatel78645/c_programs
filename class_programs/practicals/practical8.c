#include <stdio.h>

/* void print_result(int r, int c, int matrix[r][c], int matrix2[r][c], int calculated_matrix[r][c], int operator) {
  int WIDTH = 4;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%*d", WIDTH, matrix[i][j]);
    }

    if (i == r / 2) {
      if (operator == 1){
        printf("  + ");
      }else{
        printf("  - ");
      }
    }else {
      printf("    "); 
    }

    for (int j = 0; j < c; j++) {
      printf("%*d", WIDTH, matrix2[i][j]);
    }

    if (i == r / 2) {
      printf("  = ");
    } else {
      printf("    "); 
    }

    for (int j = 0; j < c; j++) {
      printf("%*d", WIDTH, calculated_matrix[i][j]);
    }
    printf("\n");
  }
} */

void print_matrix(int r, int c, int matrix[r][c]) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%4d", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int r, c;
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &r, &c);
  int matrix1[r][c], matrix2[r][c], sum[r][c], diff[r][c];
  printf("Enter elements of matrix 1:\n");
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }
  printf("Enter elements of matrix 2:\n");
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
    scanf("%d", &matrix2[i][j]);
    }
  }
  // Adding matrices
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
      diff[i][j] = matrix1[i][j] - matrix2[i][j];
    }
  }

  printf("-----------Sum of Matrix1 and Matrix2----------\n");
  print_matrix(r, c, sum);
  printf("\n\n");
  printf("-----------Difference of Matrix1 and Matrix2----------\n");
  print_matrix(r, c, diff);
  /* print_result(r, c, matrix1, matrix2, sum, 1);
  printf("\n\n");
  print_result(r, c, matrix1, matrix2, diff, 2); */
  return 0;
}
