#include<stdio.h>

int main() {
  int i,t=1;
  for (i = 1; i <=6; i++)
  {
    t*=i;
  }
  printf("%d\n",t);
  return 0;
}