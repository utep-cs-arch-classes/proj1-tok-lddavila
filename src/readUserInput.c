#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"
void main(){
  /*Creates the history list for items to be stored in */
  List *history = init_history();
  while(1){
    printf("Please enter input. '!INTEGER' retrieves a specific memory, ';' to prints history\n");
    /*dynamically allocates memory */
    char *ptr = (char*) malloc(100*sizeof(char));
    char *ptrToBeTokenized = ptr;
    char a;
    a = getchar();
    while( a != 10){
      /*will allow the user to print a specific location in memory*/
      if(a == '!'){
	a = getchar();
	get_history(history,a-'0');
	continue;
      }
      /*lets the user print the whole memory*/
      if(a == ';'){
	a = getchar();
	print_history(history);
	continue;
      }
      /*copies the char stored in 'a' into the space that *ptr refereces */
      *ptr = a;
      *ptr++;
      a = getchar();
    }
    ptr++;
    /*manually enters the terminator character to the *ptr so we can stop.*/
    ptr = '\0';

    /*adds the created *ptr to history*/
    add_history(history, ptrToBeTokenized);
    struct s_Item *tmp = history->root;
    
  }
 }

