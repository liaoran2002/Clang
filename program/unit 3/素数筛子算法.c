/*
素数筛子算法
现在给你一个正整数N，要你快速的找出在2.....N这些数里面所有的素数。

>输入
给出一个正整数数N(N<=2000000)
>输出
将2~N范围内所有的素数输出。两个数之间用空格隔开
*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("请输入一个正整数：");
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        for (j = 2; j <= i / 2; j++)
            if (i % j == 0)
                break;
        if (j == i / 2 + 1)
            printf("%d ", i);
    }
    return 0;
}