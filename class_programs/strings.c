#include <stdio.h>
#include <string.h>

int main(){

  //string length
  /* char* s = "This is a string.";
  size_t lenght = strlen(s);
  printf("%zu", lenght); */

  //char* s = "This is a string.";
  /* char s[20];
  printf("Enter a string: ");
  scanf("%s", &s);
  int length = strlen(s);
  printf("%d", length); */

  //reveres string
  /* char s[30] = "racecar";
  printf("%s", strrev(s)); */

  //check if palindrome
  /* char s[30] = "racecar";
  char rev[30];
  strcpy(rev, s);
  strrev(rev);
  if (strcmp(s, rev) == 0) {
    printf("%s: is a palindrome.", s);
  }else{
    printf("Not a palindrome.");
  }
 */

 //concatenate
  /* char str1[20] = "this is ", str2[20] = "a string.";
  printf("%s \t %s \t %s", strcat(str1, str2), str1, str2); */

  //strcmp
  /* char s1[20] = "apple", s2[20] = "Apples";
  int result = strcmp(s1, s2);
  if(result == 0){
    printf("Equal");
  }else if(result > 0){
    printf("Fist non-matching character in s1 has greater ASCII value");
  }else{
    printf("Fist non-matching character in s1 has lesser ASCII value");
  } */

  return 0;
}