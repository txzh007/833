//
// Created by Tan on 2018/5/7.
//
/**
 * ���������գ��ж���������һ��ĵڼ��죿
 */

#include "stdio.h"
#include "string.h"

void main() {
    int year, month, day, days = 0;
    printf("������������\n");
    scanf("%d %d %d", &year, &month, &day);
    if (year < 0 || month < 1 || month > 13 || day < 1 || day > 31 || day < 1)
        printf("��������\n");
    while (month--) {
        switch (month - 1) {
            case 11:
            case 9:
            case 6:
            case 4:
                days += 30;
                break;
            case 12:
            case 10:
            case 8:
            case 7:
            case 5:
            case 3:
            case 1:
                days += 31;
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 != 0)
                    days += 28;
                else days += 29;
                break;
            default:
                days += day;
                break;
        }

    }


    printf("��ǰ�ǵ�%d��", days);
}