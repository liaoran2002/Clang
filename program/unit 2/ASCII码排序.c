/*
ASCII码排序

> 输入三个字符（可以重复）后，按各字符的ASCII码从小到大的顺序输出这三个字符。

 - 输入
   输入一行，有三个字符组成，之间无空格。
 - 输出
   输出一行，字符中间用一个空格分开。
*/
#include <stdio.h>
int main() {
    char c1, c2, c3;
    printf("请输入三个字符：");
    scanf("%c%c%c", &c1, &c2, &c3);
    char temp;
    if (c1 > c2) {
        temp = c1;
        c1 = c2;
        c2 = temp;
    }
    if (c1 > c3) {
        temp = c1;
        c1 = c3;
        c3 = temp;
    }
    if (c2 > c3) {
        temp = c2;
        c2 = c3;
        c3 = temp;
    }
    printf("%c %c %c\n", c1, c2, c3);
    return 0;
}