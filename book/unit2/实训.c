#include <stdio.h>
int main() {
  int a, b, c;
  float sum, f;
  printf("请输入显示器的数量:");
  scanf("%d", &a);
  printf("请输入鼠标的数量:");
  scanf("%d", &b);
  printf("请输入键盘的数量:");
  scanf("%d", &c);
  sum = (a * 1080) + (b * 66.5) + (c * 129.8);
  printf("应付货款:%.2f\n", sum);
  printf("请输入顾客付款金额:");
  scanf("%f", &f);
  if (f < sum)
    printf("需再收:%.2f", (f - sum) * -1);
  else
    printf("找回:%.2f", f - sum);
  return 0;
}