#include<stdio.h>

int main() {
  char a[10],*p=a;
  gets(a);
  int count=0;
  while (*p++!='\0')
    count++;
  printf("%d",count);
  return 0;
}