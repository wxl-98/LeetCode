/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode104.cpp
*       &Created Time:  2020年02月29日 星期六 16时13分44秒  CST  Day/060 and Week/08 of this year
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


int maxDepth(struct TreeNode* root){
    if (root == NULL) return 0;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return 1 + ((left > right) ? left : right);
}
