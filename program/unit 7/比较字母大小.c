/*
比较字母大小
任意给出两个英文字母，
比较它们的大小，
规定26个英文字母A,B,C.....Z依次从大到小。

输入
输入一行，包含两个英文字母，以空格隔开；
输出
输出A>B，A=B，A<B中的一个。
*/
#include <stdio.h>

int main() {
    char a, b;
    printf("请输入两个英文字母，以空格隔开:");
    scanf("%c %c", &a, &b);
    printf("%c", a);
    if (a > b) {
        printf(">");
    } else if (a < b) {
        printf("<");
    } else {
        printf("=");
    }
    printf("%c\n", b);
    return 0;
}