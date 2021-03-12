#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"
void main(){
  /*Creates the history list for items to be stored in */
  List *history = init_history();
  while(1){
    printf("Please enter input|'!INTEGER' gets specific history|';' prints history|'~' frees\n");
    /*dynamically allocates memory */
    char *ptr = (char*) malloc(100*sizeof(char));
    char *ptrToBeTokenized = ptr;
    char a;
    a = getchar();
    /*will allow user to print location in history*/
    if(a == '!'){
      a = getchar();
      get_history(history,a-'0');
      /*This extra getchar() is necessary to avoid adding extra spaces to history*/
      a = getchar();
      continue;
    }
    /*allows user to print whole history*/
    else if(a == ';'){
      a = getchar();
      print_history(history);
      continue;
    }
    else if(a == '~'){
      a = getchar();
      free_history(history);
    }
    else{
      while( a != 10){      
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
    }
    
  }
 }

