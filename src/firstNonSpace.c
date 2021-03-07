#include <stdio.h>
#include "tokenizer.h"

char *word_start(char *str){
  while((non_space_char(*str)==0)){
    ++str;
     }
  if (non_space_char(*str)==2){
    char a = '\0';
    char *nullPtr = &a;
    return nullPtr;
  }
  return str; 
}



