//
// Created by Tan on 2018/5/10.
//

/***
 *
 * ���ʵ���������������Լ������С��������Ҫ��������������ɣ�
 * ��������������������ɣ�����ֱ��������Ӻ�������ɡ�
 *
 **/

#include "stdio.h"

/**
 * �����Լ��
 * @param n ���� 1
 * @param m ���� 2
 */
void funA(int n, int m) {
    int result = 0;
    for (int i = n; i > 0; i--) {
        if (m % i == 0 && n % i == 0) {
            result = i;
            break;
        }
    }

    printf("%d,%d���Լ��Ϊ��%d", n, m, result);
}

/**
 * ����С������
 * @param n ���� 1
 * @param m ���� 2
 */

void funB(int n, int m) {
    int result = 0;
    for (int i = n; i <= n * m; i++) {
        if (i % n == 0 && i % m == 0) {
            result = i;
            break;
        }
    }
    printf("%d,%d��С������Ϊ��%d", n, m, result);
}


int main() {
    funB(3, 2);

    return 1;
}