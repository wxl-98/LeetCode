/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode110.cpp
*       &Created Time:  2020年02月29日 星期六 16时50分56秒  CST  Day/060 and Week/08 of this year
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
/*int is_val(struct TreeNode *root) {
    if (root == NULL) return 0;
    int left = is_val(root->left);
    int right = is_val(root->right);
    return 1 + ((left > right) ? left : right);
}


bool isBalanced(struct TreeNode* root){
    if (!root) return true;
    int d = abs(is_val(root->left) - is_val(root->right));
    return (d <= 1) && (isBalanced(root->left)) && (isBalanced(root->right));
}*/


int Depth(struct TreeNode *root) {
    if (root == NULL) return 0;
    int l = Depth(root->left), r = Depth(root->right);
    if (l == -2 || r == -2 || abs(l - r) > 1) return -2;
    return (l > r ? l : r) + 1;
}

bool isBalanced(struct TreeNode *root) {
    return Depth(root) >= 0;
}
