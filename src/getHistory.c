#include <stdlib.h>
#include <stdio.h>
#include "tokenizer.h"
#include "history.h"

char *get_history(List *list, int id){
  struct s_Item *tmp = list->root;
  /* printf("What id we get: %d\n", id);
  printf("first id in temp: %d\n", tmp->id);
  */
  while (tmp->id != id){
    tmp = tmp->next;
  }
  char *tmpPtr = tmp->str;
  while(*tmpPtr != '\0'){
    printf("%c",*tmpPtr);
    tmpPtr++;
  }
  printf("\n");
  
  return tmpPtr; 
}
