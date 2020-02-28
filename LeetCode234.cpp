/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 234.cpp
*       &Created Time:  2020年02月27日 星期四 15时41分52秒  CST  Day/058 and Week/08 of this year
*       &Description:
***********************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 //先将链表分成两半， 将一半翻转，然后和另一半比较，val相等就是回文

int get_length(struct ListNode *head) {
    int n = 0;
    while (head) n += 1, head = head->next;
    return n;
}

struct ListNode *reverse(struct ListNode *head, int n) {
    struct ListNode ret, *p = head, *q;
    while (n--) p = p->next;
    ret.next = NULL;
    while (p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;
}

bool isPalindrome(struct ListNode* head){
    int len = get_length(head);
    struct ListNode *p = head, *q = reverse(head, (len + 1) / 2);
    while (q) {
        if (p->val - q->val) return false;
        p = p->next;
        q = q->next;
    }
    return true;
}


