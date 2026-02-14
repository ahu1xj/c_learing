#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist() {
    struct ListNode *head = NULL, *tail = NULL;
    int val;

    // 循环读取直到发现 -1
    while (scanf("%d", &val) && val != -1) {
        struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newNode->data = val;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode; // 第一个结点作为头
        } else {
            tail->next = newNode; // 接在尾巴后面
        }
        tail = newNode; // 更新尾部位置
    }
    return head;
}

struct ListNode *deletem(struct ListNode *L, int m) {
    // 1. 创建虚拟头结点，指向原链表的头部
    struct ListNode dummy;
    dummy.next = L;
    struct ListNode *pre = &dummy; // pre 始终指向当前检查结点的前一个
    struct ListNode *cur = L;      // cur 是当前正在检查的结点

    while (cur != NULL) {
        if (cur->data == m) {
            // 2. 发现目标，进行删除：让前一个跳过当前这个
            pre->next = cur->next;
            free(cur); // 释放内存，防止内存泄漏
            cur = pre->next; // 继续检查新的当前结点
        } else {
            // 3. 没匹配上，两个指针同时后移
            pre = cur;
            cur = cur->next;
        }
    }

    // 返回虚拟头结点的下一个，即真正的、处理后的头结点
    return dummy.next;
}
