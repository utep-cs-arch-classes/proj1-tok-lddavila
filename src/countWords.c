#include <stdio.h>
#include "tokenizer.h"
#include <string.h>
int count_words(char *str){
  int counter = 0; 
  /* printf("The first symbol of the string before going into the loop: %c\n", *str);*/ 
  while(*str != '\0') {
    if (*str == '\0')
      break; 
    str = word_start(str);
    /* printf("The symbol the pointer points to after calling word_start(str): %c\n", *str); */
    if(*str == '\0')
      break;
    counter++;
    str = word_end(str);
    /* printf("The symbol the pointer points to after calling word_end(str): %d\n", *str);*/
  }
  return counter; 
}
/*
main(){
  printf("Pleas eneter the text. \n");
  char str[10];
  fgets(str,10,stdin);
  int numOfWords;
  numOfWords = count_words(str);
  printf("The text you just entered has this many words: %d\n", numOfWords); 
}
*/
