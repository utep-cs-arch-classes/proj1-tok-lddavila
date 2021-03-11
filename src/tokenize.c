#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

char **tokenize(char* str){
  char **ptrToBeReturned = (char**) malloc(count_words(str)*sizeof(char *));
  /* printf("This is how memory spaces were allocated in memory by malloc: %d\n", count_words(str)+1);*/
  char **ptr = ptrToBeReturned;
  while (*str != '\0'){
    int counter = 0;
    str = word_start(str);
    /*printf("This is the str points to when word_start(str) is called: %c\n", *str);*/
    while(space_char(*str) !=1){
      if(*str == '\0')
	break;
      str++;
      counter++;
    }
    /*printf("This is the counter value after the inner while loop executes: %d\n", counter);*/
    char *ptrToBeAdded = copy_str(str-counter,counter);
    char *ptrChecker = ptrToBeAdded;
    /* printf("This is what ptrToBeAdded contains: ");
    while(*ptrChecker != '\0'){
      printf("%c", *ptrChecker);
      ptrChecker++;
	}
	printf("\n");
    */
    *ptrToBeReturned = ptrToBeAdded;
    /* printf("This is what *ptrToBeReturned contains after ptrToBeAdded is added to the 2d pntr: ");
    char *difPtrCheck = *ptrToBeReturned;
    while(*difPtrCheck != '\0'){
      printf("%c", *difPtrCheck);
      difPtrCheck++;
     }
    
    printf("\n");
    */
    ptrToBeReturned++;
    if(*str == '\0')
      break;
    str = word_start(str);
  }
  char a = '\0';
  char *zeroPointer = &a;
  *ptrToBeReturned = zeroPointer;/*
printf("Theoretically this should be H: Acutally: %c,\n", **ptr);   
			*/
return ptr;
}
