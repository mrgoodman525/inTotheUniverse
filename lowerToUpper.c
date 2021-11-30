#include <stdio.h>

int main(void) {
  char lower , upper ;
  printf("Enter any lower case letter: ");
  scanf(" %c",&lower);
  upper = toupper(lower);
  printf("your desired upper case letter is : %c ",upper);
}
