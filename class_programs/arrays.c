#include <stdio.h>
#include <limits.h>

int main(){

  //print elements of array
  /* int nums[5] = {10, 20, 30, 40, 50};
  int length = sizeof(nums) / sizeof(nums[0]);
  printf("length of array: %d\n", length);
  for(int i = 0; i < length; i++){
    printf("nums[%d]: %d\n", i, nums[i]);
  }
 */

  //get user input
  /* int nums[5];
  int length = sizeof(nums) / sizeof(nums[0]);
  printf("Enter 5 nums: ");
  for (int i = 0; i < 5; i++)
  {
    scanf(" %d", &nums[i]);
  }

  for(int i = 0; i < length; i++){
    printf("nums[%d]: %d\n", i, nums[i]);
  } */

  //enter elements max(100)
  // elements are:
  //max elemetn: 
  //min element:
  int max = INT_MIN;
  int min = INT_MAX;
  int num_of_elements;
  int max_index= 100;
  int nums[max_index];
  printf("How many elements would you like to enter? (Max: 100) ");
  scanf("%d", &num_of_elements);
  printf("Enter array elements max(100): ");
  for (int i = 0; i < num_of_elements; i++)
  {
    scanf("%d", &nums[i]);
  }
  printf("Elements of array are: ");
  for (int i = 0; i < num_of_elements; i++)
  {
    printf("%d  ", nums[i]);
  }
  for(int i = 0; i < num_of_elements; i++){
    if(nums[i] > max){
      max = nums[i];
    }
    if(nums[i] < min){
      min = nums[i];
    }
  }
  printf("\nMax element in array is: %d\n", max);
  printf("MIn element in array is: %d", min);

  return 0;
}