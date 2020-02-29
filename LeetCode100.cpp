/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode100.cpp
*       &Created Time:  2020年02月29日 星期六 14时33分23秒  CST  Day/060 and Week/08 of this year
*       &Description:
***********************************************************/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if (p == NULL && q == NULL) return true;
    if (p == NULL || q == NULL) return false;
    if (p->val - q->val) return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
