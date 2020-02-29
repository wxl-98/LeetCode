/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode107.cpp
*       &Created Time:  2020年02月29日 星期六 16时40分04秒  CST  Day/060 and Week/08 of this year
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
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */


/*int** levelOrderBottom(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
    if (!root){
        *returnSize = 0;
        return NULL;
    }
    int rear=0,front=-1,num,top,**ans,*q,*temp1,temp2;
    struct TreeNode **queue;
    queue = (struct TreeNode**)malloc(sizeof(struct TreeNode*)*10000);
    ans = (int**)malloc(sizeof(int*)*10000);
    q = (int*)malloc(sizeof(int)*10000);
    queue[rear] = root;
    top = -1;
    while(rear!=front){
        ans[++top] = (int*)malloc(sizeof(int)*(rear-front));
        q[top] = rear - front;
        for (int i=front+1;i<=rear;i++)
            ans[top][i-front-1] = queue[i]->val;
        num = 0;
        for (int i=front+1;i<=rear;i++){
            if (queue[i]->left)
                queue[rear+(++num)] = queue[i]->left;
            if (queue[i]->right)
                queue[rear+(++num)] = queue[i]->right;
        }
        front = rear;
        rear += num;
    }
    for (int i=0;i<(top+1)/2;i++){
        temp1 = ans[i];
        ans[i] = ans[top-i];
        ans[top-i] = temp1;
        temp2 = q[i];
        q[i] = q[top-i];
        q[top-i] = temp2;
    }
    *returnSize = top+1;
    *returnColumnSizes = q;
    return ans;
}
*/


/*int getDepth(struct TreeNode *root) {
    if (root == NULL) return 0;
    int d1 = getDepth(root->left);
    int d2 = getDepth(root->right);
    return (d1 > d2 ? d1 : d2) + 1;
}

void getCnt(struct TreeNode *root, int k, int *cnt) {
    if (root == NULL) return ;
    cnt[k] += 1;
    getCnt(root->left, k - 1, cnt);
    getCnt(root->right, k - 1, cnt);
    return ;
}

void getResult(struct TreeNode *root, int k, int *cnt, int **ret) {
    if (root == NULL) return ;
    ret[k][cnt[k]++] = root->val;
    getResult(root->left, k - 1, cnt, ret);
    getResult(root->right, k - 1, cnt, ret);
    return ;
}


int** levelOrderBottom(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
    if (root == NULL) return NULL;
    int n = getDepth(root);
    int **ret = (int **)malloc(sizeof(int*) * n);
    int *cnt = (int *)calloc(n, sizeof(int));
    getCnt(root, n - 1, cnt);
    for (int i = 0; i < n; i++) {
        ret[i] = (int *)malloc(sizeof(int) * cnt[i]);
        cnt[i] = 0;
    }
    getResult(root, n - 1, cnt, ret);
    *returnSize = n;
    *returnColumnSizes = cnt;
    return ret; 
}*/

int getDepth(struct TreeNode *root) {
     if (root == NULL) return 0;
     int l = getDepth(root->left), r = getDepth(root->right);
     return (l > r ? l : r) + 1;
 }

 void getCnt(struct TreeNode *root, int k, int *cnt) {
     if (root == NULL) return ;
     cnt[k] += 1;
     getCnt(root->left, k - 1, cnt);
     getCnt(root->right, k - 1, cnt);
     return ;
 }

 void getResult(struct TreeNode *root, int k, int *cnt, int **ret) {
     if (root == NULL) return ;
     ret[k][cnt[k]++] = root->val;
     getResult(root->left, k - 1, cnt, ret);
     getResult(root->right, k - 1, cnt, ret);
     return ;
 }

int** levelOrderBottom(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
    int n = getDepth(root);
    int **ret = (int **)malloc(sizeof(int *) * n);
    int *cnt = (int *)calloc(n, sizeof(int));
    getCnt(root, n - 1, cnt);
    for (int i = 0; i < n; i++) {
        ret[i] = (int *)malloc(sizeof(int) * cnt[i]);
        cnt[i] = 0;
    }
    getResult(root, n - 1, cnt, ret);
    *returnSize = n;
    *returnColumnSizes = cnt;
    return ret;
}

