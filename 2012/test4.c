//
// Created by Tan on 2018/5/7.
//
/**
 * 输入年月日，判断这天是这一年的第几天？
 */

#include "stdio.h"
#include "string.h"

void main() {
    int year, month, day, days = 0;
    printf("请输入年月日\n");

    scanf("%d %d %d", &year, &month, &day);
    switch (month - 1) {
        case 11:
            days += 30;
        case 10:
            days += 31;
        case 9:
            days += 30;
        case 8:
            days += 31;
        case 7:
            days += 30;
        case 6:
            days += 31;
        case 5:
            days += 30;
        case 4:
            days += 31;
        case 3:
            days += 30;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 != 0)
                days += 28;
            else days += 29;
        case 1:
            days += 31;
        default:
            days += day;
            break;
    }

    if (year < 0 || month < 1 || month > 13 || day < 1 || day > 31 || day < 1)
        printf("输入有误\n");
    else
        printf("当前是第%d天", days);
}