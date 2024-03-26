#include <stdio.h>
int main() {
  float hour, n, sum, num;
  printf("请输入工作时间:");
  scanf("%f", &hour);
  printf("请输入每小时工资:");
  scanf("%f", &n);
  sum = hour * n;
  num = sum - sum * 0.08;
  printf("应发工资为:%.2f\n实发工资为:%.2f", sum, num);
  return 0;
}