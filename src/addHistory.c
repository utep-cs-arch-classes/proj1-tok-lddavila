#include <stdlib.h>
#include <stdio.h>
#include "tokenizer.h"
#include "history.h"


void add_history(List *list, char *str){
  struct s_Item *tmp = list ->root;
  struct s_Item *toBeAdded = malloc(sizeof(struct s_Item)); 
  if(tmp == NULL){
    list->root = toBeAdded;
    toBeAdded->id = 1;
    toBeAdded->str = str;
    toBeAdded->next = NULL; 
  }
  else{
    while(tmp->next != NULL){
      tmp = tmp->next; 
  }
    tmp->next = toBeAdded;
    toBeAdded->id = tmp -> id + 1;
    toBeAdded->str = str;
    toBeAdded->next = NULL; 
  }
   
  
}
