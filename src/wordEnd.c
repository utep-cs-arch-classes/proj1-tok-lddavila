#include <stdio.h>
#include "tokenizer.h"
char *word_end(char *str){
  while(space_char(*str) == 0)
    ++str;
  
  
  return str; 
}

main(){
  printf("Please enter the text you want to find the next white space for. \n");
  char str[10];
  fgets(str,10,stdin);
  char *ptr;
  ptr = word_end(str);
  printf("What the ptr points to after we call the function: %d\n", *ptr); 
}
