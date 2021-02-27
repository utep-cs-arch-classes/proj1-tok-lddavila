#include <stdio.h>
#include "tokenizer.h"

char *word_start(char *str){
  int num = non_space_char(*str);
  while((non_space_char(*str)==0) &&( *str != '\0')){
    ++str;
     }
  
  return str; 
}



