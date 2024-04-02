/*
字母统计
现在给你一个由小写字母组成字符串，
要你找出字符串中出现次数最多的字母，
如果出现次数最多字母有多个那么输出最小的那个。

>输入
输入一个字符串s,s长度小于1010。
>输出
输出出现次数最多的字符；
*/
#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    printf("请输入字符串：");
    fgets(s, 1000, stdin);
    int len = strlen(s);
    int max = 0, index = 0;
    for (int i = 0; i < len; i++) {
        int count = 0;
        for (int j = 0; j < len; j++) {
            if (s[i] == s[j]) {
                count++;
            }
            if (count > max) {
                max = count;
                index = i;
            }
        }
    }
    printf("出现次数最多的字符是：%c\n", s[index]);
    return 0;
}