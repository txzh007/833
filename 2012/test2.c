//
// Created by Tan on 2018/5/5.
//

#include "stdio.h"

/**
 *  打印杨辉三角形，要求6行
 **/


void main() {
    int n = 6;
    int arry[n][n];

    for (int i = 0; i < n; i++) {
        arry[i][0] = 1;
        for (int j = 1; j < n; j++) {
            if (j > i) {
                arry[i][j] = 0;
            } else {
                arry[i][j] = arry[i - 1][j] + arry[i - 1][j - 1];
            }
        }
    }


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d\t", arry[i][j]);
        }
        printf("\n");
    }
}