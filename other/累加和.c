// 累加和：打印从 m 累加到 n 的和。
#include <stdio.h>

int main() {
    int m, n, i, sum = 0;
    printf("请输入 m 和 n:");
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++) {
        sum += i;
    }
    printf("从 %d 到 %d 的和为 %d\n", m, n, sum);
    return 0;
}