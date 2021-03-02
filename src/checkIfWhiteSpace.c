#include <stdio.h>

int space_char(char c)
{
  if(c == ' '){
    /*intf("This is a space\n");*/
    return 1; 
  }
  else if (c ==9){
    /*intf("This is a tab\n");*/
    return 1;}
  else if (c ==10){
    /* printf("This is a new line\n");*/
    return 1;}
  else if(c == '/10')
    return 0; 
  else{
    /* printf("This is not a white space char.\n");*/
    return 0;
    }
}
/*
main(){
  printf("Please enter a char for testing.\n");
  space_char(getchar()); 
  }*/
