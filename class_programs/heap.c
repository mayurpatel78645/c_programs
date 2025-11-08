/* #include <stdio.h>
#include <limits.h>

// {4, 3, 2, 1} : find the minimum cost by merging any two nums.

int get_minimum_cost(int arr[], int len) {
  int min = INT_MAX, min2 = INT_MAX, total_cost = 0, min_sum = 0, index_tracker[2];

  for (int i = 0; i < len; i++) {
    if (arr[i] < min){
      min = arr[i];
      index_tracker[0] = i;
    }
  }
  for (int i = 0; i < len; i++) {
    if (arr[i] < min2 && arr[i] != min){
      min2 = arr[i];
      index_tracker[0] = i;
    }
  }
  min_sum = min + min2;
  total_cost += min_sum;

  printf("min: %d\n", min);
  printf("min2: %d\n", min2);
  printf("min_sum: %d\n", min_sum);

  int new_arr[len - 1];
  for (int i = 0 ; i < len; i++) {
    if (i == index_tracker[0]) {
      new_arr[i] = min_sum;
    }else if( i == index_tracker[1]){
      continue;
    }else{
      new_arr[i] = arr[i];
    }
  }
  for (int i = 0; i < len - 1; i++)
  {
    printf("%d\n", new_arr[i]);
  }
  
}

int main() {
  int arr[] = {4, 3, 2, 4};
  //int arr[] = {4, 3, 2, 1};
  get_minimum_cost(arr, 4);
  return 0;
}
 */