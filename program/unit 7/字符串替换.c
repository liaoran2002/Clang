/*
字符串替换
编写一个程序实现将字符串中的所有"you"替换成"we"

>输入
输入一个字符串，长度不超过1000

>输出
输出替换后的字符串
*/
#include <stdio.h>
#include <string.h>
void replace(char *str) {
    int i, n = 0;
    int len = strlen(str);
    char t[len];
    for (i = 0; i < len; i++) {
        if (str[i] == 'y' && str[i + 1] == 'o' && str[i + 2] == 'u') {
            t[n++] = 'w';
            t[n++] = 'e';
            i += 2;
        } else {
            t[n++] = str[i];
        }
    }
    t[n] = '\0';
    strcpy(str, t);
}
int main() {
    char str[1001];
    printf("请输入一个字符串:");
    fgets(str, 1001, stdin);
    replace(str);
    printf("替换后的字符串：%s", str);
    return 0;
}