#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

  //using if and or operator
  /* char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);
  if (ch == 'a' || ch == 'A' || ch == 'e' || 
    ch == 'E' || ch == 'i' || ch == 'I' || 
    ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
      printf("Character is a vowel. Character is: %c", ch);
    }else{
      printf("Character is a consonant. Character is: %c", ch);
    }
 */

  //using array and loop
  char ch;
  char vowels_arr[5] = {'a', 'e', 'i', 'o', 'u'};
  bool is_vowel = false;
  int arr_length = sizeof(vowels_arr) / sizeof(vowels_arr[0]);

  printf("Enter a character: ");
  scanf(" %c", &ch);

  for(int i = 0; i < arr_length; i++){
    if(toupper(ch) == toupper(vowels_arr[i])){
      is_vowel = true;
      break;
    }
  }

  if(!is_vowel){
    printf("Character is a consonant. Character is: %c", ch);
  }else{
    printf("Character is a vowel. Character is: %c", ch);
  }
  
  return 0;
}