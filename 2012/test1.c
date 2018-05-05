//
// Created by Tan on 2018/5/5.
//

/**
 * ��дһ��������������   1-1/2+1/3-1/4+...+1/n
 *      �������������������������������
 **/
#include <stdio.h>
#include <math.h>


double seriesAdd(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(-1, i + 1) / (double) i;
    }

    return sum;
}

void main() {
    int n = 10;
    double sum = seriesAdd(n);

    printf("%lf", sum);
}