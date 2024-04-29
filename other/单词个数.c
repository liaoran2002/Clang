/*
单词个数

统计字符串中英文单词的数量（区分大小写，单词间以空格、换行符或标点符号分隔）

*/
#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;
    printf("输入一个字符串: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '.' || str[i] == ',') {
            count++;
        }
    }
    printf("这个字符串的单词个数: %d", count + 1);
    return 0;
}