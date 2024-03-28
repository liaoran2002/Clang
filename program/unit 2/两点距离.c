/*
两点距离

> 输入两点坐标（X1,Y1）,（X2,Y2）(0<=x1,x2,y1,y2<=1000),
计算并输出两点间的距离。

 - 输入
   输入一行，包含四个整数x1,y1,x2,y2，数据之间用空格隔开。
 - 输出
   输出一行，结果保留两位小数。

提示:
 - 两点间的距离可以用勾股定理计算：
   d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
   sqrt()函数用于计算平方根。
*/
#include <math.h>
#include <stdio.h>

int main() {
    double x1, y1, x2, y2, d;
    printf("请输入两点坐标(x1,y1) (x2,y2):");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("两点间的距离为%.2lf", d);
    return 0;
}