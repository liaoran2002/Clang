#include <stdio.h>
int main(){
  char c1='a',c2='b',c3='c',c4='\101',c5='\116';
  printf("a%cb%c\tc%c\tabc\n",c1,c2,c3);
  printf("\t\b%c%c",c4,c5);
  return 0;
}