#include <stdio.h>

int non_space_char(char c){
  if(c == ' '){
    printf("This is a space char (space).\n");
    return 0;
  }
  else if(c == 9){
    printf("This is a space char(tab).\n");
    return 0;
  }
  else if(c==10){
    printf("This is a space char(new line). \n");
    return 0;
  }
  else{
    printf("This is not a white space char.\n");
    return 1;
  }
  main(){
    printf("Please enter a char for testing.\n");
    non_space_char(getchar());
  }
