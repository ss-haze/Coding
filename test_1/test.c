#include <stdio.h>
#include <unistd.h>

void ft_ptchar(char c ){
    write (1, &c, 1);
}

int main (void) {
  char str[]="Hello World!";
  int i;
  i=0;
  while (str[i]!='\0') {
      ft_ptchar(str[i++]);
  }
  return 0;
   
}
