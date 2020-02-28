/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 35.cpp
*       &Created Time:  2020年02月26日 星期三 23时55分21秒  CST  Day/057 and Week/08 of this year
*       &Description:
***********************************************************/


int searchInsert(int* nums, int numsSize, int target){
    int head = 0, tail = numsSize;
    while (head < tail) {
        int mid = (head + tail) / 2;
        if (nums[mid] >= target) tail = mid;
        else head = mid + 1;
    }
    return head;
}
