#include <stdio.h>

int main(void) {
  char ch ;
  int d ;
  printf("Enter a letter: ");
  scanf("%c",&ch);
  

  d = ch+0 ;

  if( d  >= 65 && d <= 90 ){
    printf("You have entered CAPITAL letter: %c \n", ch);
    printf("it's SMALL formate is: %c", ch+32);

  }
  else{

    printf("You have entered SMALL letter: %c \n", ch);
    printf("it's CAPITAL formate is: %c", ch-32);
  }

  
}
