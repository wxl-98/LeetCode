/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode374.cpp
*       &Created Time:  2020年03月03日 星期二 13时20分31秒  CST  Day/063 and Week/09 of this year
*       &Description:
***********************************************************/


// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int head = 1, tail = n;
        while (head <= tail) {
            int mid = head + (tail - head) / 2;
            if (guess(mid) == 0) return mid;
            if (guess(mid) < 0) tail = mid - 1;
            else head = mid + 1;
        }
        return -1;
    }
};
