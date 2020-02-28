/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 19.cpp
*       &Created Time:  2020年02月25日 星期二 21时03分45秒  CST  Day/056 and Week/08 of this year
*       &Description:
***********************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode node, *p, *q;  //node作为虚拟头结点，也就是说node有next,node.next
    node.next = head;
    p = q = &node;  //p从虚拟头结点开始算
    while (n--) {
        q = q->next;
    }
    q = q->next;
    while (q) {
        p = p->next;
        q = q->next;
    }
    q = p->next;
    p->next = q->next;
    free(q);
    return node.next;  // 返回链表头结点
}
