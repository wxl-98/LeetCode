/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 206.cpp
*       &Created Time:  2020年02月27日 星期四 15时20分03秒  CST  Day/058 and Week/08 of this year
*       &Description:
***********************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//头插法   尾插发需要遍历到尾部，时间效率不优

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode node, *p = head, *q; //node是虚拟头结点，不是指针
    node.next = NULL;
    while (p) {
        q = p->next;
        p->next = node.next;   //头插法
        node.next = p;
        p = q;
    }
    return node.next;
}
