/*
第二小整数
求n个整数中倒数第二小的数。
每一个整数都独立看成一个数，
比如，有三个数分别是1，1，3，那么，第二小的数就是1。

>输入
输入 n个整数 (每个数均小于100),大于100退出;

>输出
输出第二小的整数。
*/
#include <stdio.h>

int main() {
    int a[100], i = 0, j, min, second_min;
    do {
        printf("请输入第%d个整数:", i + 1);
        scanf("%d", &a[i]);
    } while (a[i++] < 100);
    min = second_min = a[0];
    for (j = 1; j < i; j++) {
        if (a[j] < min) {
            second_min = min;
            min = a[j];
        } else if ((a[j] < second_min && a[j] != min) || second_min == min) {
            second_min = a[j];
        }
    }
    printf("第二小的整数是%d", second_min);
    return 0;
}