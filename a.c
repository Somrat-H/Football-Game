#include<stdio.h>
#include <termios.h>            //termios, TCSANOW, ECHO, ICANON
#include <unistd.h>     //STDIN_FILENO
#include <stdlib.h>

int main(void){   
    int m = 3, n = 3;
  char **a = malloc((sizeof(char*) * 3));
  for(int i = 0; i < 3; i++){
    a[i] = malloc(sizeof(char*)*3);
  }
  printf("%llu\n", sizeof(a) + sizeof(a[0]) * 3 + sizeof(char) * 3 * 3);


    return 0;
}