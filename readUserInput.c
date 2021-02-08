#include <stdio.h>
void main(){
  printf("Please enter something. \n");
  int userInput = getchar();
  printf("You just enetered: " );
  while(userInput != EOF){
    putchar(userInput);
    userInput = getchar();
  }
}
