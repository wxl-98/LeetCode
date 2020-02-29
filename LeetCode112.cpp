/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode112.cpp
*       &Created Time:  2020年02月29日 星期六 18时29分20秒  CST  Day/060 and Week/08 of this year
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

/*
bool hasPathSum(struct TreeNode* root, int sum){
    if (root == NULL) return false;
    sum -= root->val;
    if (!root->left && !root->right && !sum) return true;
    return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
}*/

bool hasPathSum(struct TreeNode *root, int sum) {
    if (root == NULL) return false;
    if (root->left == NULL && root->right == NULL) return root->val == sum;
    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum  - root->val);
}

