/*
鸡兔同笼
已知鸡和兔的总数量为n,总腿数为m。
输入n和m,依次输出鸡和兔的数目，
如果无解，则输出“No answer”(不要引号)。

>输入
输入一个n和m.(0<m,n<100)

>输出
输出鸡兔的个数，或者No answer
*/
#include <stdio.h>

int main() {
    int n, m, i, flag = 0;
    printf("请输入总数量n和总腿数m:");
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        if (i * 2 + (n - i) * 4 == m) {
            printf("鸡%d只,兔%d只", i, n - i);
            flag++;
        }
    }
    if (!flag)
        printf("No answer");
    return 0;
}