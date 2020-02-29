/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode257.cpp
*       &Created Time:  2020年02月29日 星期六 20时26分29秒  CST  Day/060 and Week/08 of this year
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
#include <math.h>

int getCnt(struct TreeNode *root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    return getCnt(root->left) + getCnt(root->right);
}

int getResult(struct TreeNode *root, int len, int k, char **ans, char *b) {
    if (root == NULL) return 0;
    len += sprintf(b + len, "%d", root->val);
    b[len] = 0;
    if (root->left == NULL && root->right == NULL) {
        ans[k] = strdup(b);
        return 1;
    }
    len += sprintf(b + len, "->");
    int cnt = getResult(root->left, len, k, ans, b);
    cnt += getResult(root->right, len, k + cnt, ans, b);
    return cnt;
}


char ** binaryTreePaths(struct TreeNode* root, int* returnSize){
    int cnt = getCnt(root);
    char **ans = (char **)malloc(sizeof(char *) * cnt);
    int len = 10000;
    char *b = (char *)malloc(sizeof(char) * len);
    getResult(root, 0, 0, ans, b);
    free(b);
    *returnSize = cnt;
    return ans;
}
