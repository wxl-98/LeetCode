/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode278.cpp
*       &Created Time:  2020年03月01日 星期日 23时23分29秒  CST  Day/061 and Week/09 of this year
*       &Description:
***********************************************************/


// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

int firstBadVersion(int n) {
    int head = 0, tail = n;
    while (head < tail) {
        int mid = head + ((tail - head) / 2);
        if (isBadVersion(mid)) tail = mid;
        else head = mid + 1;
    }
    return head;
}
