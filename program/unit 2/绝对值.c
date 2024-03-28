/*
求实数的绝对值。

> 求实数的绝对值。

 - 输入
   输入数据有多组，
   每组占一行，
   每行包含一个实数。
 - 输出
   对于每组输入数据，
   输出它的绝对值，
   要求每组数据输出一行，
   结果保留两位小数。
*/
#include <stdio.h>

int main() {
    double num;
    printf("请输入一个实数:");
    scanf("%lf", &num);
    printf("%.2lf\n", num < 0 ? -num : num);
    return 0;
}