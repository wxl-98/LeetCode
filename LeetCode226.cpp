/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode226.cpp
*       &Created Time:  2020年02月29日 星期六 19时49分26秒  CST  Day/060 and Week/08 of this year
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


struct TreeNode* invertTree(struct TreeNode* root){
    if (!root) return NULL;
    struct TreeNode *node = root->left;
    root->left = root->right;
    root->right = node;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}
