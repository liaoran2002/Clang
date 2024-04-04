/*
猴子吃桃问题
有一堆桃子不知数目，
猴子第一天吃掉一半，
又多吃了一个，
第二天照此方法，
吃掉剩下桃子的一半又多一个，
天天如此，
到第m天早上，
猴子发现只剩一只桃子了，
问这堆桃子原来有多少个？ (m<29)

问题二:
已知一堆桃子的个数，
猴子每天吃掉一半，
又多吃了一个，
第二天照此方法，
吃掉剩下桃子的一半又多一个，
天天如此，
到第m天早上，
猴子发现只剩一只桃子了，
问这堆桃子被吃完用了多少天？

>输入
两个数据，
第一个是m，m是天数。

>输出
桃子的总个数
*/
#include <stdio.h>
void hzDay() {
    int m, sum = 1;
    printf("请输入天数:");
    scanf("%d", &m);
    for (int i = 1; i < m; i++) {
        sum = (sum + 1) * 2;
    }
    printf("总共有%d个桃子\n", sum);
}

void hzCount() {
    int m = 1, count = 1;
    printf("请输入桃子个数:");
    scanf("%d", &count);
    while (count > 1) {
        count = count / 2 - 1;
        m++;
    }
    printf("总共吃了%d天\n", m++);
}
int main() {
    int m;
    printf("猴子吃桃问题\n");
    printf("请输入问题号(1或2):");
    scanf("%d", &m);
    if (m == 1)
        hzDay(m);
    else if (m == 2)
        hzCount(m);
    else
        printf("输入错误");
    return 0;
}