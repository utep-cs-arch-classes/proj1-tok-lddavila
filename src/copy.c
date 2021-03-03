#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

char *copy_str(char *src, short len){
  /* int counter = (int) len;
  printf("What the counter should be assigned to: %d\n", counter);
  char a ='c';
  char *ptrWeCopyTo = &a;
  char *ptrWeReturn;
  ptrWeReturn = ptrWeCopyTo; 
  printf("What the pointer should be pointing to: %c\n", *src); 
  while(counter > 0){
     printf("Does it get here\n" );
    *ptrWeCopyTo = *src;
    /* printf("You can assign the value in *src to *ptr.\n");
    ++ptrWeCopyTo;
    /* printf("You can increment ptr.\n");
    ++src;
    /* printf("You can increment src.\n");
  
    counter = counter -1;
    /* printf("You can decrement counter.\n");
  }
  printf("%c\n", *ptrWeReturn);
  return ptrWeReturn;
*/

    char *ptrToBeReturned;
    ptrToBeReturned = (char *) malloc((int)len+1);
    int counter = (int)len;
    while(counter >0){
      *ptrToBeReturned = *src;
      ptrToBeReturned++;
      src++;
      counter -=1;      
    }
    ptrToBeReturned++;
    *ptrToBeReturned =(char) '/0'; 
    while(counter < len+1){
      ptrToBeReturned-=1;
      counter++;
      }
    printf("Foolish Nonsense %c\n", *ptrToBeReturned);
    return ptrToBeReturned;
}
