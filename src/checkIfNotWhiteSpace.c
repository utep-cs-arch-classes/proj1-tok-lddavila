#include <stdio.h>
int non_space_char(char c){
  if (c == ' ')
    return 0;
  else if( c == 9)
    return 0;
  else if (c == 10)
    return 0;
  else
    return 1;
}
