#include<stdio.h>
int a=5;
int b=7;
int main() {
  int a=4,b=5,c;
  int plus(int x,int y);
  c=plus(a,b);
  printf("A+B=%d",c);
  return 0;
}
int plus(int x,int y) {
  int z;
  z=x+y;
  return z;
}