
#include <malloc.h>
#include "stdio.h"


typedef int ElemType;

// 单链表定义

typedef struct LNode {
    ElemType data;
    struct LNode *next;

} LNode, *LinkList;

// 头插法
LinkList CreateList1(LinkList L) {
    LNode *s;
    int x;
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
    LNode *s, *r;
    int x;

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


void printList(LinkList L) {
    LNode *s = L->next;
    while (s != NULL) {
        printf("%4d\n", s->data);
        s = s->next;
    };

}


int main() {
    LinkList list = NULL;
    list = CreateList2(list);

    printList(list);

    return 1;
}