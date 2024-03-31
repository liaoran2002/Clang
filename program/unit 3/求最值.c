/*
5个数求最值
设计一个从5个整数中取最小数和最大数的程序

>输入
输入只有一组测试数据，
为五个不大于1万的正整数
>输出
输出两个数，
第一个为这五个数中的最小值，
第二个为这五个数中的最大值，
两个数字以空格格开
*/
#include <stdio.h>

int main() {
    int a[5], min, max;
    for (int i = 0; i < 5; i++) {
        printf("请输入第%d个数:", i + 1);
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}