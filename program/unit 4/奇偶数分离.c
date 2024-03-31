/*
奇偶数分离
有一个整型偶数n(2<= n <=10000),
你要做的是：先把1到n中的所有奇数从小到大输出，再把所有的偶数从小到大输出。

>输入 
一个整型偶数n。
>输出 
第一行输出所有的奇数。
第二行输出所有的偶数
*/
#include<stdio.h>

int main() {
    int n, i;
    printf("请输入一个偶数:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2) {
            printf("%d ", i);
        }
    }
    printf("\n");
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}