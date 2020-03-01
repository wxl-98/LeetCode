/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode167.cpp
*       &Created Time:  2020年03月01日 星期日 23时18分11秒  CST  Day/061 and Week/09 of this year
*       &Description:
***********************************************************/


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    if(numbers && numbersSize) {
        int head = 0, tail = numbersSize - 1;
        while (head < tail) {
            if (target == numbers[head] + numbers[tail]) {
                int *p = (int *)malloc(sizeof(int) * 2);
                *returnSize = 2;
                p[0] = head + 1;
                p[1] = tail + 1;
                return p;
            } else if (target > numbers[head] + numbers[tail]) {
                head++;
            } else tail--;
        }
    }
    *returnSize = 0;
    return NULL;
}
