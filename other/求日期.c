/*
求日期功能:
输入年月日，输出该日期是第几年第几天。
输入年月日，以及向后推的天数，输出该日期向后推的天数后的日期是第几年第几天。

输出结果:
请输入年份:2021
请输入月份:12
请输入日期:31
2021年12月31日是2021年的第365天
请输入要向后的天数:10
2021年12月31日后的第10天是2022年1月1日,是2022年的第1天
*/
#include <stdio.h>

// 定义一个数组，用来存储每个月的天数
int daysOfMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 定义一个结构体，用来存储日期
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
    int count = dat.day, i;
    // 如果月份大于2，且为闰年，则天数加1
    if (dat.month > 2 && isLeapYear(dat.year))
        count++;
    // 遍历月份，计算天数
    for (i = 1; i < dat.month; i++)
        count += daysOfMonths[i - 1];
    return count;
}

// 计算指定天数的天数
struct date daysForDate(int days, int year) {
    int i;
    // 如果指定天数大于365+闰年，则将指定天数减去365+闰年
    while (days > 365 + isLeapYear(year)) {
        if (days > 365 + isLeapYear(year)) {
            days -= 365 + isLeapYear(year);
            year++;
        }
    }
    // 定义一个结构体，用来存储指定天数的天数
    struct date dat = {year, 0, 0};
    // 如果指定天数大于60，且为闰年，则将指定天数减去1
    if (days > 60 && isLeapYear(year))
        days--;
    // 遍历月份，计算指定天数的天数
    for (i = 0; i < 11; i++) {
        if (days < daysOfMonths[i])
            break;
        days -= daysOfMonths[i];
    }
    // 计算指定天数的天数
    dat.month = ++i;
    dat.day = days;
    return dat;
}

int main() {
    // 定义一个结构体，用来存储指定日期
    struct date dat;
    // 输入指定日期的年份
    printf("请输入年份:");
    scanf("%d", &dat.year);
    // 输入指定日期的月份
    printf("请输入月份:");
    scanf("%d", &dat.month);
    // 输入指定日期的日期
    printf("请输入日期:");
    scanf("%d", &dat.day);
    // 判断指定日期是否正确
    if (dat.month > 13 || dat.day > 31 ||
        ((dat.month == 4 || dat.month == 6 || dat.month == 9 || dat.month == 11) && dat.day > 30) ||
        (dat.month == 2 && dat.day > 29) ||
        (isLeapYear(dat.year) && dat.month == 2 && dat.day > 28)) {
        printf("您输入的日期有误！！！\n");
        return 0;
    }
    // 计算指定日期的天数
    int count = dateForDays(dat);
    // 输出指定日期是第几年第几天
    printf("%d年%d月%d日是%d年的第%d天\n", dat.year, dat.month, dat.day, dat.year, count);
    // 定义一个变量，用来存储要向后的天数
    int ndays = 0;
    // 输入要向后的天数
    printf("请输入要向后的天数:");
    scanf("%d", &ndays);
    // 计算指定日期的天数
    count += ndays;
    // 计算指定天数的天数
    struct date dates = daysForDate(count, dat.year);
    // 输出指定天数是第几年第几天
    printf("%d年%d月%d日后的第%d天是%d年%d月%d日,是%d年的第%d天\n", dat.year, dat.month, dat.day, ndays, dates.year, dates.month, dates.day, dates.year, dateForDays(dates));
    return 0;
}