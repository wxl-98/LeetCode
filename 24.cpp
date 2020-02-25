/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 24.cpp
*       &Created Time:  2020年02月25日 星期二 21时26分18秒  CST  Day/056 and Week/08 of this year
*       &Description:
***********************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode node, *p, *q; 
    node.next = p = head;
    q = &node;
    while (p && p->next) {
        q->next = p->next;
        p->next = q->next->next;
        q->next->next = p;
        q = p;
        p = q->next;
    }
    return node.next;
}
