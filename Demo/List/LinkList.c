
#include <malloc.h>
#include "stdio.h"

// 链表数据元素 默认为int类型 并给与别名
typedef int ElemType;

// 单链表定义
typedef struct LNode {
    ElemType data;
    struct LNode *next;

} LNode, *LinkList;

// 头插法
LinkList CreateList1(LinkList L) {
    LNode *s;
    ElemType x;
    L = (LinkList) malloc(sizeof(LNode));
    L->next = NULL;
    scanf("%d", &x);
    while (x != 9999) {
        s = (LNode *) malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }

    return L;
}

//尾插法
LinkList CreateList2(LinkList L) {
    LNode *s, *r;  //尾插法要定义一个节点指针用来指向List的最后一个元素,否则返回的是最后一个节点
    ElemType x;

    L = (LinkList) malloc(sizeof(LNode));
    L->next = NULL;
    r = L;
    scanf("%d", &x);

    while (x != 9999) {
        s = (LNode *) malloc(sizeof(LNode));

        s->next = NULL;
        s->data = x;
        r->next = s;
        r = r->next;

        scanf("%d", &x);
    }

    return L;
}

/**
 * 按下标来寻找链表元素
 * @param L 单链表
 * @param i 链表下标
 * @return  节点
 */
LNode *GetElem(LinkList L, int i) {
    int j = 1;
    if (i < 0)
        return NULL;
    LNode *node = L->next;

    if (i == 0)
        return L;
    while (node && j < i) {

        node = node->next;
        j++;
    }

    return node;


}


/**
 * 根据元素来获取节点
 * @param L 单链表
 * @param e 元素
 * @return 节点
 */
LNode *LocateElem(LinkList L, ElemType e) {
    LNode *node = L->next;
    while (node && e != node->data) {
        node = node->next;
    }
    return node;

}

//打印节点
void printList(LinkList L) {
    LNode *s = L->next;
    while (s != NULL) {
        printf("%4d\n", s->data);
        s = s->next;
    };

}


int main() {
    struct LNode *list = NULL;
    list = CreateList2(list);

    printList(list);

    return 1;
}