#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

void free_tokens(char **tokens){
  while(**tokens != '\0'){
    free(*tokens);
    tokens++;
  }
  free(tokens);
  
  
}
