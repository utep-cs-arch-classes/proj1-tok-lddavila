#include <stdlib.h>
#include <stdio.h>
#include "tokenizer.h"
#include "history.h"

char *get_history(List *list, int id){
  struct s_Item *tmp = list->root;
  while (tmp->id != id){
    if(tmp == NULL){
      printf("There's no item in history with that id.\n");
      break;
    }
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
