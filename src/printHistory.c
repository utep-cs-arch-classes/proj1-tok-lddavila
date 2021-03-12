#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

void print_history(List *list){
  struct s_Item *tmp = list->root;
  if(tmp == NULL){
    printf("There is no history. \n");
  }
  else{
    while(tmp != NULL){
      printf("ID: %d | ",tmp->id); 
      char *tmpPtr = tmp->str;
      while(*tmpPtr != '\0'){
	printf("%c",*tmpPtr);
	tmpPtr++;
      }
      printf("\n");
      tmp = tmp->next;
    }
  }
}
