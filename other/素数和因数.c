// 输入正整数 m，打印 m 以内既是素数又是因数的数。
#include <stdio.h>

int main() {
    int m, i, j;
    printf("请输入一个正整数m:");
    scanf("%d", &m);
    printf("既是素数又是因数的数有:");
    for (i = 2; i <= m; i++) {
        for (j = 2; j <= i / 2; j++)
            if (i % j == 0)
                break;
        if ((j == i / 2 + 1) && (m % i == 0))
            printf("%d ", i);
    }
    return 0;
}