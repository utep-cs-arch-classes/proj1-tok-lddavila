#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

char *copy_str(char *src, short len){

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
    printf("What the pointer contains %d \n", *ptrToBeReturned);
    while(counter < len+1){
      ptrToBeReturned-=1;
      counter++;
      }
   return ptrToBeReturned;
}
