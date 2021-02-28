#include <stdio.h>
#include "tokenizer.h"
void main(){
  printf("Please enter something.\n");
  char str[10];
  fgets(str, 10, stdin);
  int a = count_words(str);
  printf("This String has the following amount of words: %d\n", a);
}
