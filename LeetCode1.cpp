/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 1.cpp
*       &Created Time:  2020年02月26日 星期三 23时48分36秒  CST  Day/057 and Week/08 of this year
*       &Description:
***********************************************************/


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for (int i = 0; i < numsSize; i++) {
        int temp, *ans;
        ans = (int *)malloc(sizeof(int) * 2);
        temp = target - nums[i];
        for (int j = i + 1; j < numsSize; j++) {
            if (temp == nums[j]) {
                *returnSize = 2;
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return 0;
}
