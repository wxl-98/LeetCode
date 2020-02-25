/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 160.cpp
*       &Created Time:  2020年02月25日 星期二 21时31分24秒  CST  Day/056 and Week/08 of this year
*       &Description:
***********************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/*struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if (!headA || !headB) return NULL;
    while (headA) {
        struct ListNode *temp = headB;
        if (headA == temp) return headA;
        while (temp->next) {
            temp = temp->next;
            if (headA == temp) return headA;
        }
        headA = headA->next;
    }
    return NULL;
}*/

/*define swap(a, b) {\
    __typeof(a) __temp = a;\
    a = b b = a;\
}

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int cntA = 0, cntB = 0;
    struct ListNode *p = headA, *q = headB;
    while (p) cntA++, p = p->next;
    while (q) cntB++, q = q->next;
    int m = cntA - cntB;
    p = headA, q = headB;
    if (m < 0) {
        swap(p, q), m = -m;
    }
    while (m--) p = p->next;
    while (p != q) {
        p = p->next;
        q = q->next;
    }
    return p;
}*/

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p = headA, *q = headB;
    while (p != q) {
        p = p ? p->next : headB;
        q = q ? q->next : headA;
    }
    return p;
}
