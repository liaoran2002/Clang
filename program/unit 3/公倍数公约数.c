/*
最小公倍数
> 给定两个正整数，计算这两个数的最小公倍数。

 - 输入
   输入两个不大于1000的正整数.
 - 输出
   输出这两个数的最小公倍数。
-----------------------------------------
最大公约数
> 给定两个正整数，计算这两个数的最大公约数。

 - 输入
   输入两个不大于1000的正整数。
 - 输出
   输出这两个数的最大公约数。
*/
#include <stdio.h>
int min_multiple(int a, int b) {
    int i;
    for (i = 2; i < a * b; i++)
        if (i % a == 0 && i % b == 0)
            return i;
    return i;
}
int max_divisor(int a, int b) {
    int i;
    for (i = a > b ? a : b; i > 1; i--)
        if (a % i == 0 && b % i == 0)
            return i;
    return i;
}

int main() {
    int a, b;
    printf("请输入两个正整数: ");
    scanf("%d %d", &a, &b);
    printf("最小公倍数为: %d\n", min_multiple(a, b));
    printf("最大公约数为: %d\n", max_divisor(a, b));
    return 0;
}