/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode94.cpp
*       &Created Time:  2020年03月03日 星期二 17时35分17秒  CST  Day/063 and Week/09 of this year
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


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void inorder(struct TreeNode *root, int *returnSize, int *res) {
    if (root == NULL) return ;
    inorder(root->left, returnSize, res);
    res[(*returnSize)++] = root->val;
    inorder(root->right, returnSize, res);
    return ;
}

int getDepth(struct TreeNode *root) {
    if (root == NULL) return 0;
    return getDepth(root->left) + getDepth(root->right) + 1;
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    if (root == NULL) {
        *returnSize = 0;
        return NULL;
    }
    int len = getDepth(root);
    int *result = (int *)malloc(sizeof(int *) * len);
    memset(result, 0, sizeof(int) * len);
    *returnSize = 0;
    inorder(root, returnSize, result);
    return result;
}
