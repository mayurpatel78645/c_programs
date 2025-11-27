#include <stdio.h>
#include <string.h>
#include <limits.h>

//struct book
  typedef struct Book{
    char title[30];
    char author[20];
    float price;
  }Book;

  typedef struct Student {
    int id;
    char name[20];
    int marks;
  }Student;

  /* typedef struct Car{
    int top_speed;
    char make[30];
    char color[20];
  }Car; */

int main() {

  int marks_arr[3] = {45, 66, 98};
  char name_arr[3][20] = {"omkar", "Bipul", "Ankita"};
  Student students[3];
  
  for(int i = 1; i <= 3; i++) {
    students[i-1].id = i;
    students[i-1].marks = marks_arr[i-1];
    strcpy(students[i-1].name , name_arr[i-1]);
  }

  int max = INT_MIN;
  int index = INT_MIN;

  for (int i = 0; i < 3; i++) {
    if (students[i].marks > max) {
      index = i;
    }
  }

  printf("Max mark student Name: %s\n", students[index].name);
  printf("Max mark student ID: %d\n", students[index].id);
  printf("Max mark student Marks: %d", students[index].marks);
  

  /* Car toyota = {0};
  Car hyundai = {0};
  Car maruti = {0}; */

  /* Book book1 = {0};
  strcpy(book1.title, "Game of Thrones");
  strcpy(book1.author, "George R.R. Martin");
  book1.price = 646.5;

  printf("%s\n", book1.title);
  printf("%s\n", book1.author);
  printf("%.2f", book1.price); */

  /* Book books[3];
  strcpy(books[0].title, "48 Laws of Power");
  strcpy(books[0].author, "Robert Greene");
  books[0].price = 667.9;

  strcpy(books[1].title, "Atomic Habits");
  strcpy(books[1].author, "James Clear");
  books[1].price = 767.9; 

  strcpy(books[2].title, "Percy Jackson");
  strcpy(books[2].author, "Rick Riordan");
  books[2].price = 867.9;

  for (int i = 0; i < 3; i++) {
    printf("%d.\t%s\t%s\t%.2f\n", i+1, books[i].title, books[i].author, books[i].price);
  }
  */
  

  return 0;
}