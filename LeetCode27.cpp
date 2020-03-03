/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode27.cpp
*       &Created Time:  2020年03月03日 星期二 15时32分15秒  CST  Day/063 and Week/09 of this year
*       &Description:
***********************************************************/


int removeElement(int* nums, int numsSize, int val){
    int len = 0;
    for (int i = 0; i <= numsSize - 1; i++) {
        if (nums[i] != val) nums[len++] = nums[i];
    }
    return len;
}
