/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode101.cpp
*       &Created Time:  2020年02月29日 星期六 14时54分30秒  CST  Day/060 and Week/08 of this year
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

int is_val(struct TreeNode *p, struct TreeNode *q) {
    if (p == NULL && q == NULL) return 1;
    if (p == NULL || q == NULL) return 0;
    if (p->val - q->val) return 0;
    return is_val(p->left, q->right) && is_val(p->right, q->left);
}

bool isSymmetric(struct TreeNode* root){
    if (root == NULL) return true;
    return is_val(root->left, root->right);
}
