/*
进制转换

输入一个十进制数N，将它转换成R进制数输出。

-- 输入
   输入数据包含多个测试实例，
   每个测试实例包含两个整数N(32位整数)和R（2<=R<=16, R<>10）。

-- 输出
   为每个测试实例输出转换后的数，每个输出占一行。
   如果R大于10，则对应的数字规则参考16进制（比如，10用A表示，等等）。
*/

#include <stdio.h>

int main() {
    int n, r, i = 0, j;
    printf("请输入十进制数n和需要转换的进制r:");
    scanf("%d%d", &n, &r);
    if (r > 16 || r < 2) {
        printf("输入错误");
        return 0;
    } else if (r == 10) {
        printf("%d\n", n);
        return 0;
    }
    j = n;
    char result[100], res[100];
    while (j > 0) {
        res[i++] = j % r + '0';
        j /= r;
    }
    while (r == 2 && i % 4 != 0)
        res[i++] = '0';
    i--;
    j = 0;
    while (i >= 0) {
        if (((r == 2 || r == 16) && (i + 1) % 4 == 0) || (r == 8 && (i + 1) % 3 == 0))
            result[j++] = ' ';
        if (r > 10 && res[i] > '9')
            result[j++] = (res[i--] - '0') + ('A' - 10);
        else
            result[j++] = res[i--];
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}