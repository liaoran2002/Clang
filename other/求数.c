/*
输入n,
x=1-1/22+1/333-1/4444....1/nnnnnn....n
求x
*/
#include <stdio.h>

int main() {
    int i, j, n, s = 1;
    long k = 0;
    double x = 1;
    printf("请输入一个不大于9的数字:");
    scanf("%d", &n);
    if (n > 9) {
        printf("输入错误!");
        return 0;
    }
    printf("1");
    for (i = 2; i <= n; i++) {
        for (j = i; j > 0; j--) {
            k = k * 10 + i;
        }
        x += (s *= -1) * (1.0 / k);
        i % 2 ? printf("+1/%ld", k) : printf("-1/%ld", k);
        k = 0;
    }
    printf("=%lf", x);
    return 0;
}