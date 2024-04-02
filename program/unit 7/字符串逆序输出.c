/*
字符串逆序输出
给定一行字符，逆序输出此行（空格.数字不输出）

输入
字符长度不超过40 并且保证输入的字符只有空格（1个），数字，小写字母三种

输出
逆序输出（空格和数字不输出）
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[1000], temp[1000];
    int i, j = 0, len;
    printf("请输入一行字符:");
    fgets(str, 1000, stdin);
    len = strlen(str);
    printf("len = %d\n", len);
    for (i = len - 1; i >= 0; i--) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            temp[j++] = str[i];
    }
    temp[j] = '\0';
    printf("逆序输出:");
    printf("%s", temp);
    return 0;
}