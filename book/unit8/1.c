#include<stdio.h>

int main() {
  int a,b,c;
  int *x=&a,*y=&b,*z=&c;
  scanf("%d%d%d",x,y,z);
  printf("%d",*x>*y?*x>*z?*x:*z:*y>*z?*y:*z);
  return 0;
}