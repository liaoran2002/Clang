/*
素数回文
既是素数又是回文的数字称为素数回文数。
比如说151既是素数又是个回文。
现在要找出某个范围内的素数回文数，
请你写个程序找出 a 跟b 之间满足条件的数。
(5 <= a < b <= 100,000,000);

输入
数据a跟b。
输出
按从小到大输出a，b之间所有满足条件的素数回文数(包括a跟b)。
*/
#include <stdio.h>

int main() {
    int a, b, i, j,x, sum;
    printf("请输入a跟b:");
    scanf("%d%d", &a, &b);
    for (i = a; i <= b; i++) {
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j == i / 2 + 1) {
            x = i, sum = 0;
            while (x != 0) {
                sum = sum * 10 + x % 10;
                x /= 10;
            }
            if (sum == i)
                printf("%d ", i);
        }
    }
    return 0;
}