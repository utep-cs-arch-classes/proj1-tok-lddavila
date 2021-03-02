#include <stdio.h>
#include "tokenizer.h"

char *word_start(char *str){
  while((non_space_char(*str)==0)){
    ++str;
     }
  
  return str; 
}



