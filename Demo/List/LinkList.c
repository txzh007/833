#include "stdio.h"
#include <stdlib.h>

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
        printf("%d\n", s->data);
        s = s->next;
    };

}

//生成测试链表
LinkList CreateList3(ElemType *elem, int n) {
    LinkList L = (LinkList) malloc(sizeof(LNode));
    LNode *s, *r;  //尾插法要定义一个节点指针用来指向List的最后一个元素,否则返回的是最后一个节点
    L->next = NULL;
    r = L;

    for (int i = 0; i < n; i++) {
        s = (LNode *) malloc(sizeof(LNode));

        s->next = NULL;
        s->data = elem[i];
        r->next = s;
        r = r->next;
    }


    return L;
}


//设计一个递归算法,删除不带头结点的单链L中所有值为x的节点.
//void deleteElemet(LinkList L, ElemType elemType) {
//    LNode *p;
//    if (L == NULL)
//        return;
//    if (L->data == elemType) {
//        p = L;
//        L = L->next;
//        free(p);
//        deleteElemet(L, elemType);
//    } else
//        deleteElemet(L->next, elemType);
//
//}

//反转倒置链表
//void reverseTrans(LinkList L) {
//    LNode *pre, *p = L->next, *r = p->next;   // r作为路由
//    p->next = NULL;     //处理第一个节点
//    while (r != NULL) { //r为空,则说明p为最后一个节点
//        pre = p;        //依次继续遍历
//        p = r;
//        r = r->next;
//        p->next = pre;  //指针翻转
//    }
//    L->next = p;        //处理最后一个节点
//
//
//}

//头插法倒置链表
void reverseTrans(LinkList L) {
    LNode *p, *q;           // p 工作指针 q工作指针后续 防止断链
    p = L->next;            // 去掉头结点 获得第一个节点
    L->next = NULL;         // 清空链表 准备后续插入
    while (p != NULL) {     // 工作指针不为空 继续加入
        q = p->next;        // 设置后续指针 防止断链
        p->next = L->next;  // p.next 指向L.next  将p插入头部
        L->next = p;        // 讲L重新设置为链表头部 (插入成功)
        p = q;              // 将p设为后续  等待下一次插入
    }
}

void sortLinkList(LinkList L) {   //冒泡  无优化
    LNode *p, *q;
    while (p->next) {
        q = L;
        while (q->next->next) {
            if (q->next->data > q->next->next->data) {
                LNode *tmp = q->next->next;         // 将原第三跳的地址 保存
                q->next->next = tmp->next;          // 将原第四跳 赋给原第二跳的下一跳
                tmp->next = q->next;                // 将第三跳的下一条 赋值为原第二跳
                q->next = tmp;                      // 将第一跳的下一条 赋值为原第三跳

            }
            q = q->next;
        }
        p = p->next;

    }
}

int main() {
    ElemType arr[7] = {9, 2, 7, 1, 8, 5, 6};

    LinkList list = CreateList3(arr, 7);
    sortLinkList(list);

    printList(list);

    return 1;
}