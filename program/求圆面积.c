/*
求圆面积

输入圆的半径r，求圆的面积。

圆的面积公式：S=πr^2

*/
#include <stdio.h>

int main() {
    int r;
    printf("请输入圆的半径:");
    scanf("%d", &r);
    printf("%.2f", 3.14 * r * r);
    return 0;
}