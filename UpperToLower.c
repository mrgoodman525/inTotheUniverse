#include <stdio.h>

int main(void) {
  char lower , upper ;
  printf("Enter any UPPER case letter: ");
  scanf(" %c",&upper);
  lower = tolower(upper);
  printf("your desired LOWER case letter is : %c ",lower);
}
