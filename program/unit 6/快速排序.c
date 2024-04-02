/*
快速排序
给你n个整数，
请按从大到小的顺序输出其中前m大的数。

输入
n个各不相同，
且都处于区间[-500000,500000]的整数。
输出
按从大到小的顺序输出前m大的数。
*/
#include <stdio.h>

int main() {
    int a[10], i, j, k, t;
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (a[i] < a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}