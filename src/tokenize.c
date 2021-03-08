#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

char **tokenize(char* str){
  char **ptrToBeReturned = (char**) malloc(count_words(str)+1);
  char **ptr = ptrToBeReturned;
  while (*str != '\0'){
    int counter = 0;
    str = word_start(str);
    while(space_char(*str) !=1){
      if(*str == '\0')
	break;
      str++;
      counter++;
    }
    char *ptrToBeAdded = copy_str(str-counter,counter);
    *ptrToBeReturned = ptrToBeAdded;
    ptrToBeReturned++;
    if(*str == '\0')
      break;
  }
  ptrToBeReturned++;
  ptrToBeReturned = '\0';
  return ptr; 
}
