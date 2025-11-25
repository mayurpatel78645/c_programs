#include <stdio.h>
#include <string.h>

//struct book
  typedef struct Book{
    char title[30];
    char author[20];
    float price;
  }Book;

int main() {

  /* Book book1 = {0};
  strcpy(book1.title, "Game of Thrones");
  strcpy(book1.author, "George R.R. Martin");
  book1.price = 646.5;

  printf("%s\n", book1.title);
  printf("%s\n", book1.author);
  printf("%.2f", book1.price); */

  struct Book books[3];
  strcpy(books[0].title, "48 Laws of Power");
  strcpy(books[0].author, "Robert Greene");
  books[0].price = 667.9;

  strcpy(books[1].title, "Atomic Habits");
  strcpy(books[1].author, "James Clear");
  books[1].price = 767.9;

  strcpy(books[2].title, "Percy Jackson");
  strcpy(books[2].author, "Rick Riordan");
  books[2].price = 867.9;

  printf("Title\tAuthor\t\tPrice\n");
  for (int i = 0; i < 3; i++) {
    printf("\t%s\t%s\t%.2f\n", books[i].title, books[i].author, books[i].price);
  }

  return 0;
}