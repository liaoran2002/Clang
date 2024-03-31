/*
奇偶位互换
给定一个长度为偶数位的0,1字符串，请编程实现串的奇偶位互换。

>输入
输入均为0,1字符串，保证串长为偶数位(串长<=50)。

输出
输出奇偶位互换后的结果。
*/

#include <stdio.h>
#include <string.h>
int main() {
    char str[51], temp;
    int i, len;
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i += 2) {
        temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
    }
    printf("%s", str);
    return 0;
}