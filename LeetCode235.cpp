/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode235.cpp
*       &Created Time:  2020年02月29日 星期六 19时48分48秒  CST  Day/060 and Week/08 of this year
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

/*struct TreeNode *is_val(struct TreeNode *node, struct TreeNode *p, struct TreeNode *q) {
    if (node->val == p->val) return p;
    if (node->val == q->val) return q;
    if (p->val < node->val && q->val > node->val) return node;
    if (p->val > node->val) return is_val(node->right, p, q);
    return is_val(node->left, p, q);
}

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (root == NULL) return NULL;
    if (!(p->val - q->val)) return p;
    if (p->val > q->val) {
        struct TreeNode *node = p;
        p = q;
        q = node;
    }
    return is_val(root, p, q);
}*/




/*struct TreeNode *lowestCommonAncestor(struct TreeNode *root, struct TreeNode *p, struct TreeNode *q) {
    if (root == NULL) return NULL;
    if (((root->val - p->val) * (root->val - q->val)) <= 0)  return root;
    if (root->val > p->val) {
        return lowestCommonAncestor(root->left, p, q);
    } else {
        return lowestCommonAncestor(root->right, p, q);
    }
}*/

struct TreeNode *lowestCommonAncestor(struct TreeNode *root, struct TreeNode *p, struct TreeNode *q) {
    if (p->val < root->val && q->val < root->val) return lowestCommonAncestor(root->left, p, q);
    else if (p->val > root->val && q->val > root->val) return lowestCommonAncestor(root->right, p, q);
    return root;
}





