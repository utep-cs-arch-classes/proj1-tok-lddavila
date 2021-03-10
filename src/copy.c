#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

char *copy_str(char *src, short len){

    char *ptrToBeReturned;
    char *ptr; 
    ptrToBeReturned = (char *)malloc((int)len+1);
    ptr = ptrToBeReturned;
    int counter = (int)len;
    while(counter >0){
      *ptrToBeReturned = *src;
      ptrToBeReturned++;
      src++;
      counter -=1;      
    }
    *ptrToBeReturned =(char) '\0';
    
   return ptr;
}
