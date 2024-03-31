/*
完数
完数的定义：
如果一个大于1的正整数的所有因子之和等于它的本身，
则称这个数是完数，
比如6，28都是完数：6=1+2+3；28=1+2+4+7+14。

>输入
两个正整数num1和num2组成,(1<num1,num2<10000) 。
>输出
输出num1和num2之间（包括num1和num2）存在的完数个数。
*/
#include <stdio.h>

int main() {
    int num1, num2, i, j, count = 0, k[10], c = 0;
    printf("请输入两个正整数num1和num2:");
    scanf("%d%d", &num1, &num2);
    for (i = num1; i <= num2; i++) {
        int sum = 0;
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                k[c++] = j;
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d=", i);
            for (j = 0; j < c; j++) {
                printf("%d", k[j]);
                if (j < c - 1)
                    printf("+");
            }
            printf("\n");
            count++;
        }
        c = 0;
    }
    printf("%d和%d之间存在的完数个数为:%d", num1, num2, count);
    return 0;
}