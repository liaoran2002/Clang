/*
成绩转换

> 输入一个百分制的成绩M，将其转换成对应的等级，具体转换规则如下：
> 90~100为A;
> 80~89为B;
> 70~79为C;
> 60~69为D;
> 0~59为E;

使用switch或if-else语句实现。
*/

#include <stdio.h>
char switch_grade(int m) {
    switch (m / 10) {
    case 10:
    case 9:
        return 'A';
    case 8:
        return 'B';
    case 7:
        return 'C';
    case 6:
        return 'D';
    default:
        return 'E';
    }
}
char if_else_grade(int m) {
    if (m >= 90) {
        return 'A';
    } else if (m >= 80) {
        return 'B';
    } else if (m >= 70) {
        return 'C';
    } else if (m >= 60) {
        return 'D';
    } else {
        return 'E';
    }
}
int main() {
    int m;
    printf("请输入百分制的成绩：");
    scanf("%d", &m);
    printf("等级：%c\n", switch_grade(m));
    printf("等级：%c\n", if_else_grade(m));
    return 0;
}