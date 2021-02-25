#include <stdio.h>

int space_char(char c)
{
  if(c == ' ')
    printf("This is a space\n");
  else if (c ==9)
    printf("This is a tab\n");
  else if (c ==10)
    printf("This is a new line\n");
  else
    printf("This is not a white space char.\n"); 
}
main(){
  printf("Please enter a char for testing.\n");
  space_char(getchar()); 
}
