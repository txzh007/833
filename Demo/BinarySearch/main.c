//
// Created by Tan on 2018/8/6.
//

#include <stdio.h>

typedef int ElemType;

/**
 * 二分查找法
 * @param arry ⭐⭐⭐ 有序数组
 * @param n     长度
 * @param target 目标元素
 * @return  返回目标元素在数组中的下标,无结果返回 -1
 */
int binarySearch(ElemType arry[], int n, ElemType target) {

    int l = 0, r = n - 1; // 初始化边界

    while (l <= r) {
//        int mid =(r+l)/2;   可能会造成int类型范围超出
        int mid = l + (r - l) / 2;  // 计算中间地址

        if (target < arry[mid])
            r = mid - 1;
        else if (target > arry[mid])
            l = mid + 1;
        else
            return mid;
    }


    return -1;     // Elem查找不到时 返回-1
}

int main() {

    ElemType arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    printf("%d", binarySearch(arr, 10, 8));
    return 1;
}
