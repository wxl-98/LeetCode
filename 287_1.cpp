/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 287_1.cpp
*       &Created Time:  2020年02月27日 星期四 19时02分11秒  CST  Day/058 and Week/08 of this year
*       &Description:
***********************************************************/


int findDuplicate(int* nums, int numsSize){
    int p = nums[0], q = nums[0];
    do {
        p = nums[p];
        q = nums[nums[nums[q]]];
    } while (p != q);
    int cnt = 0;
    do {
        cnt += 1;
        p = nums[p];
    } while(p != q);
    p = nums[0], q = nums[0];
    while (cnt--) q = nums[q];
    while (p != q) {
        p = nums[p];
        q = nums[q];
    }
    return p;
}
