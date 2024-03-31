/*
统计硬币
给定钱的总数，求有多少种不同的组合方式。
有一元，五元，十元，二十元，五十元，一百元五种纸币，每种纸币的数量不限。
求一共有多少种可能的组合方式（某种面值的钱可以数量可以为0）。

>输入
钱的总数。
>输出
请输出可能的组合方式数。
*/
#include <stdio.h>

int main() {
    int money, i, j, k, l, m, n, count = 0;
    printf("请输入钱的总数:");
    scanf("%d", &money);
    for (n = 0; n <= money / 100; n++)
        for (m = 0; m <= money / 50; m++)
            for (l = 0; l <= money / 20; l++)
                for (k = 0; k <= money / 10; k++)
                    for (j = 0; j <= money / 5; j++)
                        for (i = 0; i <= money; i++)
                            if (i + j * 5 + k * 10 + l * 20 + m * 50 + n * 100 == money) {
                                printf("第%d种组合方式:", ++count);
                                n ? printf("%d张一百元 ", n) : 0;
                                m ? printf("%d张五十元 ", m) : 0;
                                l ? printf("%d张二十元 ", l) : 0;
                                k ? printf("%d张十元 ", k) : 0;
                                j ? printf("%d张五元 ", j) : 0;
                                i ? printf("%d张一元 ", i) : 0;
                                printf("\n");
                            }
    printf("共有%d种组合方式.", count);
    return 0;
}