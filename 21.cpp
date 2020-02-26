/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 21.cpp
*       &Created Time:  2020年02月26日 星期三 23时54分45秒  CST  Day/057 and Week/08 of this year
*       &Description:
***********************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode node, *p;
    node.next = NULL;
    p = &node;
    while (l1 || l2) {
        if (l2 == NULL || (l1 && l1->val < l2->val)) {
            p->next = l1;
            l1 = l1->next;
            p = p->next;
        } else {
            p->next = l2;
            l2 = l2->next;
            p = p->next;
        }
    }
    return node.next;
}
