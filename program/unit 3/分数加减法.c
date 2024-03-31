/*
分数加减法
编写一个C程序，实现两个分数的加减法

>输入
输入格式是"a/boc/d"。
其中a, b, c, d是一个0-9的整数。
o是运算符"+"或者"-"。
输入数据保证合法

>输出
输出两个分数的运算结果。
注意结果应符合书写习惯，
没有多余的符号、分子、分母，
并且化简至最简分数
*/
#include <stdio.h>

int main() {
    int a, b, c, d, i, num, den, gcd = 1;
    char o;
    printf("请输入两个分数的表达式,格式为a/b+c/d或a/b-c/d:");
    scanf("%d/%d%c%d/%d", &a, &b, &o, &c, &d);
    if (o == '+') {
        num = a * d + b * c;
        den = b * d;
    } else if (o == '-') {
        num = a * d - b * c;
        den = b * d;
    } else {
        printf("输入错误！");
        return 0;
    }
    for (i = 1; i <= den; i++) {
        if (den % i == 0 && num % i == 0) {
            gcd = i;
        }
    }
    printf("结果为:");
    if (num == 0)
        printf("0");
    else if (num % den == 0)
        printf("%d", num / den);
    else
        printf("%d/%d", num / gcd, den / gcd);
    return 0;
}