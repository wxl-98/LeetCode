/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode268.cpp
*       &Created Time:  2020年03月01日 星期日 23时23分14秒  CST  Day/061 and Week/09 of this year
*       &Description:
***********************************************************/


/*int missingNumber(int* nums, int numsSize){
    int ans = 0, n = numsSize + 1;
    for (int i = 0, j = 2; ; i += 1, j *= 2) {
        int cnt = n / j * (j >> 1);
        if (n % j > (j >> 1)) {
            cnt += n % j - (j >> 1);
        }
        if (cnt % 2) ans |= (1 << i);
        if (j >= n) break;
    }
    for (int i = 0; i < numsSize; i++) ans ^= nums[i];
    return ans;
}*/



int missingNumber(int* nums, int numsSize){
    for (int i = 0; i < numsSize; i++) {
        while (nums[i] != i && nums[i] != numsSize) {
            int a = nums[i], b = nums[nums[i]];
            nums[a] = a, nums[i] = b;
        }
    }
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] - i) return i;
    }
    return numsSize;
}
