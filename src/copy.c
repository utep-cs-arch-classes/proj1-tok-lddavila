#include <stdio.h>
#include "tokenizer.h"

char *copy_str(char *src, short len){
  int counter = (int) len;
  char *ptr;
  while(counter >0 ){
    *ptr = *src;
    ++ptr;
    ++src; 
    counter-=1;
  }
  return ptr; 
}
