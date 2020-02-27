/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 203.cpp
*       &Created Time:  2020年02月27日 星期四 14时53分34秒  CST  Day/058 and Week/08 of this year
*       &Description:
***********************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode node, *p = &node, *q;
    node.next = head;
    while (p && p->next) {
        if (p->next->val == val) {
            q = p->next;
            p->next = p->next->next;  //p->next = q->next;
            free(q);
        } else {
            p = p->next;
        }
    }
    return node.next; 
}
