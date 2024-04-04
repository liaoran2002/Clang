/*
绝对值排序
输入n(n<=100)个整数，
按照绝对值从大到小排序后输出。
题目保证对于每一个测试实例，
所有的数的绝对值都不相等。

输入
输入n个整数，
n=0表示输入数据的结束，
不做处理

输出
输出排序后的结果，
两个数之间用一个空格隔开。
*/
#include <stdio.h>

int main() {
    int a[101], i, j, n, temp, k = 0;
    printf("请输入n个整数,输入0结束:");
    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;
        a[k++] = n > 0 ? n : -n;
    }
    for (i = 0; i < k; i++) {
        for (j = 0; j < k - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("排序后的结果:");
    for (i = 0; i < k; i++)
        printf("%d ", a[i]);
    return 0;
}