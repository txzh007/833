//
// Created by Tan on 2018/5/10.
//

/***
 *
 * 编程实现求两个整数最大公约数和最小公倍数。要求用两个函数完成，
 * 即输入整数在主函数完成，输出分别在两个子函数中完成。
 *
 **/

#include "stdio.h"

/**
 * 求最大公约数
 * @param n 数字 1
 * @param m 数字 2
 */
void funA(int n, int m) {
    int result = 0;
    for (int i = n; i > 0; i--) {
        if (m % i == 0 && n % i == 0) {
            result = i;
            break;
        }
    }

    printf("%d,%d最大公约数为：%d", n, m, result);
}

/**
 * 求最小公倍数
 * @param n 数字 1
 * @param m 数字 2
 */

void funB(int n, int m) {
    int result = 0;
    for (int i = n; i <= n * m; i++) {
        if (i % n == 0 && i % m == 0) {
            result = i;
            break;
        }
    }
    printf("%d,%d最小公倍数为：%d", n, m, result);
}


int main() {
    funB(3, 2);

    return 1;
}