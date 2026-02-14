#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
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
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */

// 尾部插入
struct ListNode *readlist()
{
	struct ListNode *head = NULL, *tail = NULL;
	int val;
	while (scanf("%d", &val) && val != -1) {
        	struct ListNode *newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->data = val;
        newNode->next = NULL;
	if (head == NULL) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        tail = newNode; // 更新尾指针
    }
    return head;
}

struct ListNode *getodd(struct ListNode **L) {
    struct ListNode *oddHead = NULL, *oddTail = NULL; // 奇数链表
    struct ListNode *evenHead = NULL, *evenTail = NULL; // 偶数链表
    struct ListNode *p = *L;

    while (p != NULL) {
        if (p->data % 2 != 0) { // 奇数
            if (oddHead == NULL) {
                oddHead = p;
            } else {
                oddTail->next = p;
            }
            oddTail = p;
        } else { // 偶数
            if (evenHead == NULL) {
                evenHead = p;
            } else {
                evenTail->next = p;
            }
            evenTail = p;
        }
        p = p->next;
    }

    // 处理两个链表的末尾，防止形成环或指向已分离的结点
    if (oddTail != NULL) oddTail->next = NULL;
    if (evenTail != NULL) evenTail->next = NULL;

    // 更新原链表头指针 L 为偶数链表的头
    *L = evenHead;

    return oddHead;
}
