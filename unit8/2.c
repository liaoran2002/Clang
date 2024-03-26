#include<stdio.h>

int main() {
  int a[10],*p=a;
  for (int i = 0; i <10; i++)
  {
    scanf("%d",p++);
  }
  for (int i = 0; i < 5; i++)
  {
    p--;
    *p=*p+a[i];
    a[i]=*p-a[i];
    *p=*p-a[i];
  }
  p=a;
  for (int i = 0; i <10; i++)
  {
    printf("%d\t",*p);
    p++;
  }
  return 0;
}