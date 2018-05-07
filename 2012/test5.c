//
// Created by Tan on 2018/5/7.
//
/**
 * 设在文件a.txt和文件b.txt中分别存有两个字符串，设计一个程序将这2个字符串按依序交叉的方式合并成一个字符串
 * （如“aaaaa”与"bbb”的合并结果为“abababaa”;而“bbb”与“aaaaa”的合并结果为“bababaaa”）,并将结果存入文件a.txt中。
 */

#include "stdio.h"

int main() {
    FILE *filea = fopen("a.txt", "wr");;
    FILE *fileb = fopen("b.txt", "w");;

    if (filea == NULL || fileb == NULL) {
        return 0;
    }

    char ch = NULL;


    return 1;
}
