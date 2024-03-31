/*
杨辉三角
还记得中学时候学过的杨辉三角吗？
具体的定义这里不再描述，
你可以参考以下的图形：
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

输入
输入只包含一个正整数n（1<=n<=30）
表示将要输出的杨辉三角的层数。
输出
输出相应层数的杨辉三角。
*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("请输入层数：");
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++)
            printf(" ");
        for (j = 0; j <= i; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}