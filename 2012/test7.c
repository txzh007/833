//
// Created by Tan on 2018/5/10.
//
/**
 * 从键盘上输入三个整数a,b,c，输出这三个数，然后交换他们中的数，把a中原来的值给b,把b中的原来的值给c,把c中原来的值给a,并输出交换后的数字；
 */

#include "stdio.h"

int main() {
    int a, b, c;
    printf("请输入a,b,c\n");
    scanf("%d %d %d", &a, &b, &c);
    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;

    printf("a:%d,b:%d,c:%d", a, b, c);
    return 1;
}