/*
开灯问题
有n盏灯，
编号为1~n，
第1个人把所有灯打开，
第2个人按下所有编号为2 的倍数的开关（这些灯将被关掉），
第3 个人按下所有编号为3的倍数的开关（其中关掉的灯将被打开，开着的灯将被关闭），
依此类推。
一共有k个人，
问最后有哪些灯开着？
输入：n和k，输出开着的灯编号。k≤n≤1000

>输入
输入一组数据：n和k
>输出
输出开着的灯编号
*/
#include <stdio.h>

int main() {
    int n, k, i, j;
    printf("请输入灯的数量n和人数k:");
    scanf("%d%d", &n, &k);
    int light[n];
    for (i = 0; i < n; i++)
        light[i] = 0;
    for (i = 0; i < n; i++)
        for (j = 1; j <= k; j++)
            if ((i + 1) % j == 0)
                light[i] = !light[i];
    for (i = 0; i < n; i++) {
        if (light[i])
            printf("%d ", i + 1);
    }
    return 0;
}