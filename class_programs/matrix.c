#include <stdio.h>

int main() {
  // int matrix[3][2] = {{1,2,3}, {4,5,6}}
  int row, col;
  printf("Enter the number of row: ");
  scanf(" %d", &row);

  printf("Enter the number of col: ");
  scanf(" %d", &col);

  int matrix1[row][col];
  int matrix2[row][col];

  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      printf("Enter the matrix element matrix1[%d][%d]: ", i, j);
      scanf(" %d", &matrix1[i][j]);

      printf("Enter the matrix element matrix2[%d][%d]: ", i, j);
      scanf(" %d", &matrix2[i][j]);
    }
  }
  int sum[row][col];
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      printf("sum[%d][%d]: %d\n",i, j, sum[i][j]);
    }
  }
  return 0;
}