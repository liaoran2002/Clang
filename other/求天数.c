#include <stdio.h>

// 定义一个数组，用于存储每个月的天数
int daysOfMonths[11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

// 定义一个结构体，用于存储日期
struct date {
    int year;
    int month;
    int day;
};

// 判断是否为闰年
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

// 计算指定日期的天数
int dateForDays(struct date dat) {
    int count = 0, i;
    // 如果月份大于2，且为闰年，则天数加1
    if (dat.month > 2 && isLeapYear(dat.year))
        count++;
    // 累加月份的天数
    for (i = 1; i < dat.month; i++)
        count += daysOfMonths[i - 1];
    // 累加日期
    count += dat.day;
    return count;
}

int main() {
    // 定义一个结构体，用于存储日期
    struct date dat;
    int count = 0;
    // 输入年份
    printf("请输入年份:");
    scanf("%d", &dat.year);
    // 输入月份
    printf("请输入月份:");
    scanf("%d", &dat.month);
    // 输入日期
    printf("请输入日期:");
    scanf("%d", &dat.day);
    // 判断输入的日期是否正确
    if (dat.month > 13 || dat.day > 31 ||
        ((dat.month == 4 || dat.month == 6 || dat.month == 9 || dat.month == 11) && dat.day > 30) ||
        (dat.month == 2 && dat.day > 29) ||
        (isLeapYear(dat.year) && dat.month == 2 && dat.day > 28)) {
        printf("您输入的日期有误！！！\n");
        return 0;
    }
    // 计算指定日期的天数
    count = dateForDays(dat);
    // 输出指定日期的天数
    printf("%d-%d-%d是%d年的第%d天\n", dat.year, dat.month, dat.day, dat.year, count);
    return 0;
}
// 输出结果:
// 请输入年份:2021
// 请输入月份:12
// 请输入日期:31
// 2021-12-31是2021年的第365天