//
// Created by Tan on 2018/5/10.
//
/**
 * �Ӽ�����������������a,b,c���������������Ȼ�󽻻������е�������a��ԭ����ֵ��b,��b�е�ԭ����ֵ��c,��c��ԭ����ֵ��a,���������������֣�
 */

#include "stdio.h"

int main() {
    int a, b, c;
    printf("������a,b,c\n");
    scanf("%d %d %d", &a, &b, &c);
    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;

    printf("a:%d,b:%d,c:%d", a, b, c);
    return 1;
}