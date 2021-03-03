#include <stdio.h>
#include "tokenizer.h"
void main(){
  printf("Please enter something.\n");
  char str[100];
  fgets(str, 100, stdin);
  /*TEST FOR COPY_STR(*STR, SHORT LEN)
 char *ptr = copy_str(str, 7);
  printf("REturned something\n");
  while (*ptr != '/0'){
    printf("%c", *ptr);
    ptr++;
    if (*ptr == '0')
      break;
  }
  printf("\n");
  */ 
}
