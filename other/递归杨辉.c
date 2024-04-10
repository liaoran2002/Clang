// 打印杨辉三角形。(要求：使用递归函数)
#include <stdio.h>
int fun(int a, int b) {
    if (b == 0 || a == b)
        return 1;
    else
        return fun(a - 1, b - 1) + fun(a - 1, b);
}
int main() {
    int n, i, j;
    printf("请输入杨辉三角形的层数:");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= n - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%d ", fun(i, j));
        }
        printf("\n");
    }
    return 0;
}