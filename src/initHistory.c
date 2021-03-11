#include<stdio.h>
#include<stdlib.h>
#include "history.h"
#include "tokenizer.h"

List* init_history(){
  List *List1 = malloc(sizeof(List));
  List1 -> root = NULL;  
  return List1; 
}
