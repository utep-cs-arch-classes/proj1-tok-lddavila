#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

void free_history(List *list){
  struct s_Item *tmp = list ->root;
  while(tmp != NULL){
    free(tmp->str);
    tmp = tmp->next;
  }
  free(list); 
}
