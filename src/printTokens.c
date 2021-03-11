#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

void print_tokens(char **toks){         
  
  while(**toks !='\0'){
    if(**toks == '\0')
      break;
    char *tmpPtr = *toks;
    while (*tmpPtr != '\0'){
      if(*tmpPtr == '\0')
	break;
      printf("%c", *tmpPtr);
      tmpPtr++;
    }
    printf("\n");
    toks++;
  }
  printf("\n");
 
}
