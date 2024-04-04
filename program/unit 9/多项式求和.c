/*
多项式求和
多项式的描述如下：

1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...

现在请你求出该多项式的前n项的和。

输入
输入一个数n。
输出
输出多项式前n项的和，结果保留2位小数。

例：

输入：
请输入一个数:10

输出：
1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + 1/7 - 1/8 + 1/9 - 1/10 = -0.65
*/
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    printf("请输入一个数:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        i == 1 ? printf("1") : printf("1/%d", i);
        i != n ? i % 2 ? printf(" - ") : printf(" + ") : printf(" = ");
        i % 2 ? (sum -= 1.0 / i) : (sum += 1.0 / i);
    }
    printf("%.2lf\n", sum);
    return 0;
}