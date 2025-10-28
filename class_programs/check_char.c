#include <stdio.h>
#include <ctype.h>

int main(){

  char ch;
  printf("Enter a character: ");
  scanf(" %c", &ch);

  if (isupper(ch)){
    printf("Character is uppercased. Char: %c", ch);
  }else if(islower(ch)){
    printf("character is lowercased. Char: %c", ch);
  }else if(isdigit(ch)){
    printf("Char is digit. char: %c", ch);
  }else{
    printf("Character is special. char: %c", ch);
  }

  return 0;
}