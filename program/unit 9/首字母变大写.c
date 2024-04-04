/*
首字母变大写
输入一个英文句子，
将每个单词的第一个字母改成大写字母。

输入
输入一个长度不超过100的英文句子。
输出
输出按照要求改写后的英文句子。
*/
#include <stdio.h>

int main() {
    char str[101];
    fgets(str, 101, stdin);
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i - 1] == ' ' || i == 0) && str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    printf("%s", str);
    return 0;
}