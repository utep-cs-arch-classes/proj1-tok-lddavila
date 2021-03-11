#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
void main(){
  while(1){
    printf("Please enter something.\n"); 
    char *ptr = (char*) malloc(100*sizeof(char));
    char *ptrToBeTokenized = ptr;
    char a;
    a = getchar();
    while( a != 10){
      *ptr = a;
      *ptr++;
      a = getchar();
    }
    ptr++;
    ptr = '\0';	       
    char **tokenized = tokenize(ptrToBeTokenized); 
  }
 }

