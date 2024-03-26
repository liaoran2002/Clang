#include <stdio.h>

int main()
{
  int i, x = 1, y = 0, temp;
  for (i = 1; i <= 20; i++)
  {
    temp = y;
    y = x + temp;
    x = temp;
    printf("%-5d", y);
    if (i % 5 == 0)
      printf("\n");
  }
  return 0;
}