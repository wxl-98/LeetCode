/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode2.cpp
*       &Created Time:  2020年03月03日 星期二 15时16分03秒  CST  Day/063 and Week/09 of this year
*       &Description:
***********************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *p = l1, *q = l2;
    struct ListNode *head = (struct ListNode *)calloc(1, sizeof(struct ListNode));
    struct ListNode *node = head;
    int val1, val2, cnt = 0;
    while (p != NULL || q != NULL || cnt == 1) {
        if (p != NULL) {
            val1 = p->val;
            p = p->next;
        } else {
            val1 = 0;
        }
        if (q != NULL) {
            val2 = q->val;
            q = q->next;
        } else {
            val2 = 0;
        }
        node->next = (struct ListNode *)calloc(1, sizeof(struct ListNode));
        node->next->val = (val1 + val2 + cnt) % 10;
        cnt = (val1 + val2 + cnt) / 10;
        node = node->next;
    }
    return head->next;
}
