/* #include <stdio.h>
int main() {
  int n, temp;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter elements:\n");
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  // Bubble Sort
  for(int i = 0; i < n-1; i++) {
    for(int j = 0; j < n-i-1; j++) {
      if(arr[j] > arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  printf("Sorted array in ascending order:\n");
  for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
} */

#include <stdio.h>

void bubble_sort(int n, int arr[n]) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]){
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {

  int arr[] = {5, 8, 7, 1, 3};
  int len = sizeof(arr) / sizeof(arr[0]);

  bubble_sort(len, arr);

  for (int i = 0; i < len; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}