#include <stdio.h>
// 递归求两数的最大公约数
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
// 迭代求两数的最大公约数和最小公倍数
void gcd_iter(int m, int n) {
    int a, b;
    a = m * n;
    b = m % n;
    while (b) {
        m = n;
        n = b;
        b = m % n;
    }
    a /= n;
    printf("最大公约数是:%d,最小公倍数是:%d\n", n, a);
}

// 迭代求两数的最大公约数
int fun(int m, int n) {
    int b = m % n;
    if (b != 0) {
        return fun(n, b);
    } else {
        return n;
    }
}
int main() {
    int a, b;
    printf("请输入两个整数:");
    scanf("%d%d", &a, &b);
    printf("最大公约数是:%d,最小公倍数是:%d\n", gcd(a, b), a * b / gcd(a, b));
    gcd_iter(a, b);
    printf("最大公约数是:%d,最小公倍数是:%d", fun(a, b), a * b / fun(a, b));
    return 0;
}