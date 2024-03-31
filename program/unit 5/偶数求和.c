/*
偶数求和
有一个长度为n(n<=100)的数列，
该数列定义为从2开始的递增有序偶数，
现在要求你按照顺序每m个数求出一个平均值，
如果最后不足m个，则以实际数量求平均值。
编程输出该平均值序列。

>输入
输入两个正整数n和m，n和m的含义如上所述。
>输出
输出一个平均值序列。
*/
#include <stdio.h>

int main() {
    int n, m, i, sum = 0, count = 0;
    double avg;
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++) {
        sum += i * 2;
        count++;
        if (count == m) {
            avg = (double)sum / m;
            printf("%.2f\n", avg);
            sum = 0;
            count = 0;
        }
    }
    if (count > 0) {
        avg = (double)sum / count;
        printf("%.2f\n", avg);
    }
    return 0;
}