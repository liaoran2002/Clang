/*
计算球体积

> 根据输入的半径值，计算球的体积。

 - 输入
   输入数据有多组，
   每组占一行，
   每行包括一个实数，
   表示球的半径。
 - 输出
   输出对应的球的体积，
   对于每组输入数据，
   输出一行，
   计算结果保留三位小数。
*/
#include <stdio.h>
#define PI 3.141593
int main() {
    double r;
    printf("请输入球的半径：");
    scanf("%lf", &r);
    double v = (4.0 / 3.0) * PI * r * r * r;
    printf("球的体积为：%.3lf\n", v);
    return 0;
}