#include <stdio.h>
#include "tokenizer.h"
void main(){
  printf("Please enter something.\n");
  char str[100];
  fgets(str, 100, stdin);
  /*TEST FOR COUNT WORDS
  printf("Results for count words: %d\n", count_words(str));
  */ 
  /*TEST FOR COPY_STR(*STR, SHORT LEN)
 char *ptr = copy_str(str, 5);
  while (*ptr != '\0'){
    printf("%c", *ptr);
    ptr++;
    if (*ptr == '0')
      break;
  }
  printf("\n");
  /*

  /*TEST FOR TOKENIZER.C*/

  char **ptr = tokenize(str);
  printf("before free \n");
  print_tokens(ptr);
  /*  free_tokens(ptr);
  printf("after free\n"); 
  print_tokens(ptr);
  */
 }

