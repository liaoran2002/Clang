/*
平方和与立方和
给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和。

输入
输入两个整数m和n.
输出
输出包括两个整数x和y，
分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和。
你可以认为32位整数足以保存结果。
*/
#include <stdio.h>

int main() {
    long sump = 0, suml = 0;
    int m, n, i;
    scanf("%d%d", &m, &n);
    for (i = m; i <= n; i++) {
        if (i % 2 == 0) {
            sump += i * i;
        } else {
            suml += i * i * i;
        }
    }
    printf("%ld %ld", sump, suml);
    return 0;
}